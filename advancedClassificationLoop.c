#include "NumClass.h"
#include <stdio.h>
// #define True 1
// #define False 0

// Specify the return type of the function
int isArmstrong(int number);

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
    int ans = number; // Added a semicolon here

    // Fix the syntax error by adding a semicolon
    while (numbertocheck != False) {
        numbertocheck = numbertocheck / 10;
        counterdigits++;
    }

    int sum = 0;

    // Fix the syntax error by adding a semicolon
    while (number != False) {
        int dig = number % 10;
        sum = sum + clautepowerdig(dig, counterdigits);
        number = number - dig;
        number = number / 10;
    }

    if (ans == sum) {
        return True;
    }

    return False;
}
int isPalindrome(int number)
{
        int counterdigits = 0;
    int numbertocheck = number;
    int ans = number; // Added a semicolon here

    // Fix the syntax error by adding a semicolon
    while (numbertocheck != False) {
        numbertocheck = numbertocheck / 10;
        counterdigits++;
    }
    int tempdigits=counterdigits;
    int tempnumber=number;

 for (int i = 0; i < counterdigits/2; i++)
 {
        //    printf("the temp number is %d\n",tempnumber);
        //  printf("%d\n",i);
    int RightD=tempnumber%10; 
   int pow= clautepowerdig(10,tempdigits-1);
    //  printf("the pow is %d\n",pow);
  int  LeftD=number/pow;
    //    printf("the clacute left is %d\n",LeftD);
  LeftD=LeftD%10;
//   printf("the right is %d\n",RightD);
        // printf("the Left dig is %d\n",LeftD);
  if (RightD!=LeftD)
  {
    return False;
  }
  tempdigits--;
  tempnumber=tempnumber/10;
 }
 return True;
}


