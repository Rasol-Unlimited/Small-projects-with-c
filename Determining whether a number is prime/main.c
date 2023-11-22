#include <stdio.h>

int main(){
    // Definition of variables | تعریف متغیرها
    int n;
    char c='y';

    // Repeating loop | حلقه ی تکرار شونده
    while(c == 'y'){
        printf("Enter a number: ");
        scanf("%d", &n);

        // Check if a number is prime or not | بررسی اینکه آیا عدد اول است یا خیر
        if (n <= 1) {
            printf("%d is not a prime number.", n);
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    printf("%d is not a prime number.", n);
                    break;
                }
                printf("%d is a prime number.", n);
            }
        }
    printf("\ndo you continue?  y | n\n");
    scanf("%s", &c);
    printf("\n");
    }

    return 0;
}