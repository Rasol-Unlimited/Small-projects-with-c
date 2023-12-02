#include <stdio.h>

int main() {

  printf("welcome!!\nin this program I will check your 3 integers and tell you whether it is possible to form a right triangle with these sides or not.\n\n");

  // Definition of variables | تعریف متغیرها
  int a=0, b=0, c=0, label_main, label_continue;
  label_main:
    // Get the length of the sides of the triangle from the user | دریافت طول اضلاع مثلث از کاربر
    // The length of the first side | طول ضلع اول
    printf("Length of the first side: ");
    scanf("%d", &a);
    // The length of the second side | طول ضلع دوم
    printf("Length of the second side: ");
    scanf("%d", &b);
    // The length of the third side | طول ضلع سوم
    printf("Length of the third side: ");
    scanf("%d", &c);

    // بررسی اینکه آیا مجموع مربع دو ضلع قائم در مثلث قائم الزاویه، بزرگتر از مربع ضلع سوم است یا خیر.
    // Checking whether the sum of the squares of two right sides in a right triangle is greater than the square of the third side or not.
    if (a * a + b * b >= c * c && b * b + c * c >= a * a && a * a + c * c >= b * b) {
      printf(">> The triangle is right-angled.");
    } else {
      printf(">> The triangle is not right angled.");
    }
    goto label_continue;

  label_continue:
    printf("\ndo you continue?  y | n\n");
    scanf("%s", &c);
    if (c == 'y'){
    printf("-----------\n");
        goto label_main;
    }

return 0;
}