#include "harness.h"
#define N 5

void sort(int* a, int len, int i) {
  while ( i < len ) {
    int k = i;
    int s = i + 1;
    while ( k < len ) {
      if ( a[k] <= a[s] ) s = k;
      k = k+1;
    }
    if ( s != i ) {
      int tmp = a[s];
      a[s] = a[i];
      a[i] = tmp;
    }
    
    i = i+1;
  }
}

int main( ) {
  int a[N];
  int i = 0;
  int x;
  int y;
	
  for(i = 0; i < N; i++)
    {
      a[i] = __random_int();
    }
  
  i = 0;
  sort(a, N, i);
    
  for ( x = 0 ; x < N ; x++ ) {
    for ( y = x + 1 ; y < N ; y++ ) {
      assert(  a[x] <= a[y]  );
    }
  }

  return 0;
}
