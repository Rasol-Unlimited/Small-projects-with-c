#include <stdio.h>

int main() {
    // Definition of variables | تعریف متغیرها
    int n=0;
    char c='y';

    // Repeating loop | حلقه ی تکرار شونده
    while(c == 'y'){
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
        printf("\ndo you continue?  y | n\n");
        scanf("%s", &c);
        printf("\n");
    }

    return 0;
}