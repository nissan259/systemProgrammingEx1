#include "NumClass.h"


// Function prototype for reverseNum
int reverse(int n, int copy);

int clautepowerdiglRec(int dig, int counterdigits) {
    if (counterdigits == 0) {
        return True;
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
    int number = reverse(n, 0);

    if (number == n) {
        return True;
    } else {
        return False;
    }
}

int reverse(int n, int numberrevrse) {
    if (n == 0) {
        return numberrevrse;
    }
    numberrevrse = (numberrevrse * 10) + (n % 10);
    return reverse(n / 10, numberrevrse);
}
