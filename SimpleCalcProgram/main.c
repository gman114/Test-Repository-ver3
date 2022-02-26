#include <stdio.h>
#include <stdbool.h>
#include "AddSubtract.h"
#include "MultDiv.h"
#include "PowLog.h"


int main (int argc, char *argv[]) {
    int userSelect = 0;

    printf("Welcome to the Simple Calculator program!\n");
    
    bool userQuit = false; 
    while (!(userQuit)) {

        printf("What would you like to do?\n");
        printf("============================\n");
        printf("1 - Add two numbers\n");
        printf("2 - Subtract two numbers\n");
        printf("3 - Multiply two numbers\n");
        printf("4 - Divide two numbers\n");
        printf("5 - calculate the power of a number\n");
        printf("6 - calculate the logarithm of a number\n");
        printf("7 - quit\n");

        printf("Selection >> ");
        fflush(stdout);
        scanf("%d", &userSelect);
        
        if (userSelect == 1) {
            int x, y;
            printf("Enter two numbers to add >> ");
            fflush(stdout);
            scanf("%d %d", &x, &y);
            printf("%d plus %d = %d\n", x, y, add(x, y));

        } else if (userSelect == 2) {
            int x, y;
            printf("Enter two numbers to subtract >> ");
            fflush(stdout);
            scanf("%d %d", &x, &y);
            printf("%d minus %d = %d\n", x, y, subtract(x, y));

        } else if (userSelect == 3) {
            int x, y;
            printf("Enter two numbers to multiply >> ");
            fflush(stdout);
            scanf("%d %d", &x, &y);
            printf("%d times %d = %d\n", x, y, multiply(x, y));

        } else if (userSelect == 4) {
            int num, denom;
            printf("Enter the numerator >> ");
            fflush(stdout);
            scanf("%d", &num);

            bool denomValid = false;
            while(!(denomValid)) {
                printf("Enter the denominator >> ");
                fflush(stdout);
                scanf("%d", &denom);
                if (denom != 0) {
                    denomValid = true;
                } else {
                    printf("cant divide by zero, select another number\n");
                }
            }
            printf("%d divided by %d = %d\n", num, denom, divide(num, denom));

        } else if (userSelect == 5) {
            int base, pow;

            printf("Enter the base >> ");
            fflush(stdout);
            scanf("%d", &base);

            printf("Enter the power >> ");
            fflush(stdout);
            scanf("%d", &pow);

            printf("%d to the power of %d = %d\n", base, pow, power(base, pow));
            

        } else if (userSelect == 6) {
            int base, arg;

            printf("Enter the base >> ");
            fflush(stdout);
            scanf("%d", &base);

            printf("Enter the power >> ");
            fflush(stdout);
            scanf("%d", &arg);

            printf("%d to the power of %d = %d\n", base, arg, power(base, arg));

        } else if (userSelect == 7) {
            printf("Exiting program...\n");
            userQuit = true;

        } else {
            printf("Selection not recognized...\n");
        }
    }


}