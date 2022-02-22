#include <math.h>

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