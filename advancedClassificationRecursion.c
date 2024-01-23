#include "NumClass.h"

#define True 1
#define False 0

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

int isPalindromeRec(int tempdigits, int i, int tempnumber, int originalNumber) {
    if (i == tempdigits / 2) {
        return True;
    }

    int RightD = tempnumber % 10;
    int pow = clautepowerdiglRec(10, tempdigits - 1);
    int LeftD = originalNumber / pow;
    LeftD = LeftD % 10;

    if (RightD != LeftD) {
        return False;
    }

    return isPalindromeRec(tempdigits - 1, i + 1, tempnumber / 10, originalNumber);
}

int isPalindrome(int number) {
    int counterdigits = 0;
    int numbertocheck = number;

    while (numbertocheck != False) {
        numbertocheck = numbertocheck / 10;
        counterdigits++;
    }

    return isPalindromeRec(counterdigits, 0, number, number);
}
