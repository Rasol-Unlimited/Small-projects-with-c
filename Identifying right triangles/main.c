/*The code was created by Mohammad Rasol Sohrabi (Rasol Unlimited).
Communication methods are listed on the GitHub page
https://github.com/Rasol-Unlimited*/

#include <stdio.h>

int main() {

  printf("welcome!!\nin this program I will check your 3 integers and tell you whether it is possible to form a right triangle with these sides or not.\n\n");

  // Definition of variables
  int a=0, b=0, c=0, label_main, label_continue;
  
  label_main:
    // Get the length of the sides of the triangle from the user
    // The length of the first side
    printf("Length of the first side: ");
    scanf("%d", &a);
    // The length of the second side
    printf("Length of the second side: ");
    scanf("%d", &b);
    // The length of the third side
    printf("Length of the third side: ");
    scanf("%d", &c);

    // Checking whether the sum of the squares of two right sides in a right triangle is greater than the square of the third side or not.
    if (a * a + b * b >= c * c && b * b + c * c >= a * a && a * a + c * c >= b * b) {
      printf(">> The triangle is right-angled.");
    } else {
      printf(">> The triangle is not right angled.");
    }
    goto label_continue;

  label_continue:
      printf("\nDo you want to continue? (y/n): ");
      char d;
      scanf("%s", &d);
      if (d == 'y' || d == 'Y') {
          printf("-----------\n");
          goto label_main;
      }else{
          printf("-----------\nGood Luck!!");
      }

return 0;
}