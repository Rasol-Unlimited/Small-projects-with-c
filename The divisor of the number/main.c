/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nin this program I receive 1 integer from you and tell you its divisors.\n\n");

    // Definition of variables
    int n=0, label_main, label_continue;

    label_main:
        printf("Enter a number: ");
        scanf("%d", &n);
        // Check if a number is prime or not
        if (n <= 0) {
            printf(">> Incorrect number.");
            goto label_continue;
            return 0;
        }else{
            if (n == 1) {
            printf(">> 1");
            } else {
                printf(">> ");
                //Let's start from 1 and go up to n/2
                for (int i = 1; i <= n/2; i++) {
                    //If n is divisible by i, print it
                    if (n % i == 0) {
                        printf("%d ", i);
                    }
                }
            }
        }

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