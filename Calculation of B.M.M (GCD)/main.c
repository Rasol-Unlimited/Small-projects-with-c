/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nIn this program, by entering 2 arbitrary numbers, you will receive their greatest common divisor.\n\n");

    // Definition of variables
    int m, n;

    label_main:
        printf("Enter the first number: ");
        scanf("%d", &m);

        printf("Enter the second number: ");
        scanf("%d", &n);

        while (n != 0) {
            int temp = m;
            m = n;
            n = temp % n;
        }

        printf(">> GCD Two numbers entered: %d", m);
        goto label_continue;

    label_continue:
        printf("\nDo you want to continue? (y/n): ");
        char c;
        scanf("%s", &c);
        if (c == 'y' || c == 'Y') {
            printf("-----------\n");
            goto label_main;
        }else{
            printf("-----------\nGood Luck!!");
        }
        
    return 0;
}
