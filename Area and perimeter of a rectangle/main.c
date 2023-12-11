/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

    printf("welcome!!\nIn this program, by giving me the length and width of a desired rectangle, you will receive its area and perimeter.\n\n");

    // Definition of variables
    int length, width;

    label_main:
        printf("Enter the length of the rectangle: ");
        scanf("%d", &length);

        printf("Enter the width of the rectangle: ");
        scanf("%d", &width);

        if (length < 0 || width < 0) {
            printf(">> Length and width must be positive.");
            goto label_continue;
            return 0;
        }
        int perimeter = 2 * (length + width);
        int area = length * width;

        printf(">> rectangle circumference: %d\n", perimeter);
        printf(">> rectangle area: %d", area);
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