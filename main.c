/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 // lab2_1.cpp:this file contains the 'main' function.
// program execution begins and ends there.
//
#include <stdio.h>

int main()
{ int YoB, CY, age;
    printf("enter your year of birth:");
scanf("%d",&YoB);
printf("ENTER THE CURRENT YEAR:");
scanf("%d",&CY);
age=CY-YoB;
printf("the entered year of birth:%d\n ", YoB);
printf("THE ENTERD YEAR:%d \n",CY);
printf("YOU ARE %d YEARS OLD\n\n",CY-YoB);
if (age >= 18){ printf("you are an adult\n");
} 
{ if (age < 18)
  printf("you are a minor ");
}
switch(age) {
    case 0 ... 9:
    printf("you are less than 10\n");
    break;
    case 10 ... 19:
    printf("your are a teen/ teenager\n");
    break;
    case 20 ... 29:
    printf("you are in your twenties\n");
    break;
    case 30 ... 39:
    printf("you are in your thirties\n");
    break;
    case 40 ... 49:
    printf("you are in your forties\n");
    break;
    case 50 ... 59:
    printf("you are in your fifties\n ");
    break;
    case 60 ... 69:
    printf("you are in your sixties\n");
    break;
    case 70 ... 79:
    printf("you are in your seventies\n ");
    break;
    case 80 ... 89:
    printf("you are in your eighties\n");
    break;
    case 90 ... 99:
    printf("you are in your ninties");
    break;
    case 100 ... 300:
    printf("wow you are above 100");
    break;
}
return 0;
}
