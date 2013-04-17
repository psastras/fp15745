#include<stdlib.h>
#include "bzlib_private.h"

#define W 40
#define N 512
#define K 1024
#define SEED 0615

UInt32 ptr[2*N*K];
UInt32 data[2*N*K];
UInt32 ftab[2*K*K];

int main(){
  int i;
  EState s;
  UChar* block=(UChar*)data;
  srand(SEED);

  for(i=0;i<N*K;i++)
    block[i]=rand();

  s.ptr   = ptr;
  s.arr1  = ptr;
  s.arr2  = data;
  s.ftab  = ftab;
  s.block = block;

  s.nblock = N*K;
  s.verbosity = 0;
  s.workFactor = 50;
  BZ2_blockSort(&s);

#ifdef DUMP
  for(i=0;i<N*K;){
    int j;
    for(j=0;j<W && i<N*K;j++,i++)
      printf("%02x",block[ptr[i]]);
    printf("\n");
  }
#endif
  
return 0;  
}
