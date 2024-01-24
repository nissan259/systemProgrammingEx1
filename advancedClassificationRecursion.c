#include "NumClass.h"

#define True 1
#define False 0

// Function prototype for reverseNum
int reverseNum(int n, int copy);

int clautepowerdiglRec(int dig, int counterdigits) {
    if (counterdigits == 0) {
        return 1;
    }
    return dig * clautepowerdiglRec(dig, counterdigits - 1);
}

int isArmstrong(int numbertocheck) {
    int counterdigits = 0;
    int numbertocheck_copy = numbertocheck; // Changed variable name to avoid redeclaration
    int ans = numbertocheck;

    while (numbertocheck_copy != False) {
        numbertocheck_copy = numbertocheck_copy / 10;
        counterdigits++;
    }

    int sum = 0;

    while (numbertocheck != False) {
        int dig = numbertocheck % 10;
        sum = sum + clautepowerdiglRec(dig, counterdigits);
        numbertocheck = numbertocheck - dig;
        numbertocheck = numbertocheck / 10;
    }

    if (ans == sum) {
        return True;
    }
    return False;
}

int isPalindrome(int n) {
    int number = reverseNum(n, 0);

    if (number == n) {
        return 1;
    } else {
        return 0;
    }
}

// Function definition for reverseNum
int reverseNum(int n, int copy) {
    if (n == 0) {
        return copy;
    }
    copy = (copy * 10) + (n % 10);
    return reverseNum(n / 10, copy);
}
