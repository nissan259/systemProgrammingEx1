#include <stdio.h>
#include "NumClass.h"  // Assuming you have declarations for isArmstrong, isPalindrome, isPrime, and isStrong in NumClass.h

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("The Armstrong numbers are:");
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }

      printf("\nThe Palindromes are:");
   for(int i = num1; i < num2; i++){
        if(isPalindrome(i)){
            printf(" %d",  i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }     
     printf("\nThe Strong numbers are:");
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }
      printf("\n");
    return 0;
}
