#include "harness.h"

int main() {
	int x = __random_int();
	int a = __random_int();
	int b = __random_int();

	if (x < a) return 0;
	if ((unsigned int) x-a > 256) return 0;

	int r = (long long) (x-a) * b / 256;

	if (b >= 0) {
		assert(0 <= r && r <= b);
	} else {
		assert(b <= r && r <= 0);
	}
	return 0;
}
