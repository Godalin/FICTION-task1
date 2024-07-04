#include <stdio.h>
#include <stdlib.h>
#include "harness.h"

void reach_error() {
    printf("##########\tERROR!\t##########\n");
    exit(1);
}

void assert(int cond) {
    if (!(cond)) reach_error();
    return;
}
unsigned char __random_uchar() {
    return (unsigned char)rand() % 256;
}

unsigned short __random_ushort() {
    unsigned char low = __random_uchar();
    unsigned char high = __random_uchar();
    return (unsigned short)(high << 8) | low;
}

unsigned int __random_uint() {
    unsigned short low = __random_ushort();
    unsigned short high = __random_ushort();
    return (unsigned int)(high << 16) | low;
}

int __random_int() {
    unsigned int random_uint = __random_uint();
    return (int)random_uint;
}
