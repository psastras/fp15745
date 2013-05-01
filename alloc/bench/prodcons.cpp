// -*- mode: c++ -*-
// $Id: prodcons.gpp,v 1.1 2004-11-10 06:59:16 bfulgham Exp $
// http://www.bagley.org/~doug/shootout/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <pthread.h>

using namespace std;

pthread_mutex_t mutex;
pthread_cond_t control;
void producer(int *arg);
void consumer(int *arg);
int pcount, data, consumed, produced;


int
main(int argc, char *argv[]) {
    int n = ((argc == 2) ? atoi(argv[1]) : 1);
    pthread_t t1, t2;
    
    pcount = data = consumed = produced = 0;

    if (pthread_mutex_init(&mutex, NULL)) {
	perror("pthread_mutex_init");
	exit(1);
    }
    if (pthread_cond_init(&control, NULL)) {
	perror("pthread_cond_init");
	exit(1);
    }
    if (pthread_create(&t1, (pthread_attr_t *)NULL,
		       (void * (*)(void *))producer, (void *)&n)) {
	perror("pthread_create");
	exit(1);
    }
    if (pthread_create(&t2, (pthread_attr_t *)NULL,
		       (void * (*)(void *))consumer, (void *)&n)) {
	perror("pthread_create");
	exit(1);
    }
  
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    cout << produced << " " << consumed << endl;
    return(0);
}


void producer(int *arg) {
    int i, n = *arg;
    for (i=1; i<=n; i++) {
	pthread_mutex_lock(&mutex);
	while (pcount == 1) {
	    pthread_cond_wait(&control, &mutex);
	}
	data = i;
	pcount = 1;
	pthread_cond_signal(&control);
	pthread_mutex_unlock(&mutex);
	produced++;
    }
}
 

void consumer(int *arg) {
    int i = 0, n = *arg;
    while (1) {
	pthread_mutex_lock(&mutex);
	while (pcount == 0) {
	    pthread_cond_wait(&control, &mutex);
	}
	i = data;
	pcount = 0;
	pthread_cond_signal(&control);
	pthread_mutex_unlock(&mutex);
	consumed++;
	if (i == n) return;
    }
}

