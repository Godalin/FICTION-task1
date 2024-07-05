#include "harness.h"
int main (void)
{
  char in[11];
  char *s;
  unsigned char c;
  int i, j;
  int idx_in;
  for (i = 0; i < 11; i++)
    in[i] = __random_uchar();
  in[10] = 0;
  idx_in = 0;
  s = in;
  i = 0;
  c = in[idx_in];
  while (('0' <= c) && (c <= '9'))
  {
    j = c - '0';
    i = i * 10U + j;
    idx_in++;
    c = in[idx_in];
  }
  
  assert (i >= 0);
  return 0;
}
