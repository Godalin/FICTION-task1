#include "harness.h"

void foo(unsigned i,   	unsigned j) {
    int a[2] = { 0 };
    if (i>1 || j>1) return;
    a[i] = 5;
    assert(a[j] != 5);
}

int main() {
    unsigned i = __random_uint();
    unsigned j = __random_uint();

    foo(i, j);

    return 0;
}
