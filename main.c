#include <stdio.h>
# include "NumClass.h"
int main() {
    printf("enter two nunbers\n");
    printf("Choose your number to check if it is prime:");
        int num1 = 0;
        int num2 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
        printf("The Armstrong numbers are");
    for (int i = num1; i < num2; i++)
    {
         if (isArmstrong(i)) {
        printf("%d   ", i);
    } 
    }
          printf("\n");
          printf("The Palindromes are");
    for (int i = num1; i <=num2; i++)
    {
         if (isPalindrome(i)) {
        printf("%d        ", i);
    }
    }
    //         printf("The prime are");
    // for (int i = num1; i <=num2; i++)
    // {
    //      if (isPrime(i)) {
    //     printf("%d        ", i);
    // }
    // }
    //          printf("The strong are");
    // for (int i = num1; i <=num2; i++)
    // {
    //      if (isStrong(i)) {
    //     printf("%d        ", i);
    // }
    // }
    
    // int prime = 0;
    // printf("Choose your number to check if it is prime: ");
    // scanf("%d", &prime);

    // if (isPrime(prime)) {
    //     printf("%d is a prime number.\n", prime);
    // } else {
    //     printf("%d is not a prime number.\n", prime);
    // }
    //     int Strong = 0;
    // printf("Choose your number to check if it is Strong: ");
    // scanf("%d", &Strong);

    // if (isStrong(Strong)) {
    //     printf("%d is a strong number.\n", Strong);
    // } else {
    //     printf("%d is not a strong number.\n", Strong);
    // }
    //        int amtrong = 0;
    // printf("Choose your number to check if it is amstorng:");
    // scanf("%d", &amtrong);
    //     printf("%d is a amstorng number.\n", amtrong);
    // if (isArmstrong(amtrong)) {
    //     printf("i am good");
    //     printf("%d is a amstorng number.\n", amtrong);
    // } else {
    //     printf("%d is not a amstorng number.\n", amtrong);
    // }
    //         int Plaindorm = 0;
    // printf("Choose your number to check if it is Plaindorm:");
    // scanf("%d", &Plaindorm);
    //     printf("%d is a Plaindorm number.\n", Plaindorm);
    // if (isPalindrome(Plaindorm)) {
    //     printf("i am good");
    //     printf("%d is a Plaindorm number.\n", Plaindorm);
    // } else {
    //     printf("%d is not a Plaindorm number.\n", Plaindorm);
    // }

    // return 1 ;
    return 1;
}
