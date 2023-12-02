#include <stdio.h>

int main() {

    printf("welcome!!\nin this program I receive 1 integer from you and tell you its divisors.\n\n");

    // Definition of variables | تعریف متغیرها
    int n=0, c, label_main, label_continue;

    label_main:
        printf("Enter a number: ");
        scanf("%d", &n);
        // Check if a number is prime or not | بررسی اینکه آیا عدد اول است یا خیر
        if (n == 1) {
            printf("1");
        } else {
            //Let's start from 1 and go up to n/2 | از 1 شروع کنیم و تا n/2 پیش برویم
            for (int i = 1; i <= n/2; i++) {
                //If n is divisible by i, print it | اگر n بر i بخش پذیر باشد، آن را چاپ کنیم
                if (n % i == 0) {
                    printf("%d ", i);
                }
            }
        }

    label_continue:
        printf("\ndo you continue?  y | n\n");
        scanf("%s", &c);
        if (c == 'y'){
        printf("-----------\n");
            goto label_main;
        }
    return 0;
}