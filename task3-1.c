#include "harness.h"
int main() { 
  unsigned short i, n=__random_ushort();
  int sn=0;
  for(i=0; i<n; i++) {
    sn = sn + i;
  }
  int new_sn = n*(n+1)/2;
  assert(sn==new_sn || sn == 0);
}
