/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nIn this program, I will send you 3-digit odd numbers from big to small.\n\n");

    // Definition of variables 
    int i = 999;

    while (i >= 101) {
        if (i % 2 == 1) {
        printf("%d ", i);
        }
        i -= 2;
    }

    return 0;
    }