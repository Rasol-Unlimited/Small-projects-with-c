/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nin this program I check the integer you enter and tell you if your number is prime or not.\n\n");
    
    // Definition of variables
    int n, i, c, label_main, label_continue;

    label_main:
        printf("Enter a number: ");
        scanf("%d", &n);
        // Check if a number is prime or not
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
            printf(">> %d is not a prime number.", n);
            goto label_continue;
            return 0;
            }
        }
        printf(">> %d is a prime number.", n);
        goto label_continue;

    label_continue:
        printf("\ndo you continue?  y | n\n");
        scanf("%s", &c);
        if (c == 'y'){
        printf("-----------\n");
            goto label_main;
        }else{
            printf("\nGood Luck!!");
        }
    return 0;
}