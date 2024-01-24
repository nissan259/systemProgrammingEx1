#include "NumClass.h"
#include <stdio.h>

int clautepowerdig(int dig, int counterdigits) {
    int result = 1; // Initialize result to 1
    for (int i = 0; i < counterdigits; i++) {
        result *= dig;
    }
    return result;
}

int isArmstrong(int number) {
    int counterdigits = 0;
    int numbertocheck = number;

    while (numbertocheck != 0) {
        numbertocheck = numbertocheck / 10;
        counterdigits++;
    }

    int sum = 0;
    int ans = number;

    while (ans != 0) {
        int dig = ans % 10;
        sum = sum + clautepowerdig(dig, counterdigits);
        ans = ans / 10;
    }

    return number == sum;
}

int isPalindrome(int number) {
    int counterdigits = 0;
    int numbertocheck = number;

    while (numbertocheck != 0) {
        numbertocheck = numbertocheck / 10;
        counterdigits++;
    }

    int tempdigits = counterdigits;
    int tempnumber = number;
    

    for (int i = 0; i < counterdigits / 2; i++) {
        int RightD = tempnumber % 10;
        int pow = clautepowerdig(10, tempdigits - 1);
        int LeftD = number / pow;
        LeftD = LeftD % 10;

        if (RightD != LeftD) {
            return 0;  // Changed to return 0 for False
        }

        tempdigits--;
        tempnumber = tempnumber / 10;
    }

    return 1;  // Changed to return 1 for True
}
