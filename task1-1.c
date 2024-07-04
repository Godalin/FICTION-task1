#include "harness.h"

void foo(int a, int b) {
    int x = 1, y = 0;
    if (a != 0) {
        y = 3+x;
        if (b == 0)
            x = 2*(a+b);
    }
    assert(x-y != 0);
}

int main() {
    int a = __random_int();
    int b = __random_int();

    foo(a, b);

    return 0;
}
