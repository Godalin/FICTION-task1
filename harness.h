#ifndef HARNESS_H  
#define HARNESS_H  
 
void reach_error();
void assert(int cond);

unsigned char   __random_uchar();       // 8-bit
unsigned short  __random_ushort();      // 16-bit
unsigned int    __random_uint();        // 32-bit
int __random_int();     // 32-bit
 
#endif
