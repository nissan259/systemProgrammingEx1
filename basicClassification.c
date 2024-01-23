#include <stdio.h>
#include "NumClass.h"
// #define True 1
// #define False 0

int ClacauteFactorial(int);

int isPrime(int primeNumber) {

    if (primeNumber <= 1) {
        return False; // 0 and 1 are not prime numbers
    }

    if (primeNumber <= 3) {
        return True; // 2 and 3 are prime numbers
    }
    for (int i = 2; i * i <= primeNumber; i++) {
        if (primeNumber % i == 0) {
            return False; // Not a prime number
        }
    }

    return True; // Prime number
}

int isStrong(int Strong) { // <-- Removed extra semicolon here
    int ans = Strong;
    int sum = 0;
    while (Strong != False) {
        int numTofactrial = Strong % 10;
        sum += ClacauteFactorial(numTofactrial);
        Strong = Strong - numTofactrial;
        Strong = Strong / 10;
    }
    if (sum == ans) {
        return True;
    }
    return False;
}

int ClacauteFactorial(int numTofactrial) {
    int factans = 1;
    for (int i = 2; i <= numTofactrial; i++) {
        factans = factans * i;
    }
    return factans;
}
