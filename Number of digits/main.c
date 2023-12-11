/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nIn this program, you enter your desired number and I will tell you the number of its digits.\n\n");

  // Definition of variables
    int n, count = 0;
    
    label_main:
        count = 0;
        printf("Enter a number: ");
        scanf("%d", &n);
        while(n > 0){
            count++;
            n /= 10;
        }
        printf(">> The number of digits of the entered number: %d", count);
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
