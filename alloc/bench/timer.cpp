#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Return 1 if the difference is negative, otherwise 0.  */
int timeval_subtract(struct timeval *result, struct timeval *t2, struct timeval *t1)
{
    long int diff = (t2->tv_usec + 1000000 * t2->tv_sec) - (t1->tv_usec + 1000000 * t1->tv_sec);
    result->tv_sec = diff / 1000000;
    result->tv_usec = diff % 1000000;

    return (diff<0);
}

int main(int argc, char *argv[])
{
	// clock_t begin, end;
	// double time_spent;

	// begin = clock();
	
	// end = clock();
	// time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	// fprintf( stderr,"%f\n", time_spent);
	// return 0;

	struct timeval tvBegin, tvEnd, tvDiff;

    // begin
    gettimeofday(&tvBegin, NULL);

    // lengthy operation
    
    system(argv[1]);
    //end
    gettimeofday(&tvEnd, NULL);

    // diff
    timeval_subtract(&tvDiff, &tvEnd, &tvBegin);
    fprintf(stderr ,"%ld.%06ld\n", (long)tvDiff.tv_sec, (long)tvDiff.tv_usec);

    return 0;
}
