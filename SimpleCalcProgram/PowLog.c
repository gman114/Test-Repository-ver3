#include <math.h>
// dont forget to use "-lm" at end of gcc command because of thing (you know the thing)

int power(int base, int pow) {
    int result = 1;
    while (pow > 0) {
        result = result * base;
        pow--;
    }
    return result;
}

int log_x(int base, int arg) {
    return log(arg) / log(base);
}