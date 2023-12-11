/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nIn this program, you enter an arbitrary number and you receive smaller prime numbers in response.\n\n");

    // Definition of variables
    int n=0, i, j, label_main, label_continue;

    label_main:
        // Receive input from the user
        printf("Enter a number: ");
        scanf("%d", &n);

        // Checking whether the entered number is correct or not
        if (n <= 2) {
            printf(">> Incorrect number.");
            goto label_continue;
            return 0;
        }else{
            printf(">> ");
            for (int i = 2; i < n; i++) {
                for (j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        break;
                    }
                }
                if (j * j > i) {
                    printf("%d ", i);
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