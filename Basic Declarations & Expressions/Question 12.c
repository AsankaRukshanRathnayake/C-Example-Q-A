/*

Write a C program to convert a given integer (in days) to years, months and days,
assuming that all months have 30 days and all years have 365 days.

Test Data :
    Input no. of days: 2535

Expected Output:
    6 Year(s)
    11 Month(s)
    15 Day(s)

*/

#include <stdio.h>

void main(){
    int numberOfDays;

    printf("Input no. of Days : ");
    scanf("%d",&numberOfDays);

    printf("\n");
    printf("%d Year(s)\n",numberOfDays/365);
    printf("%d Month(s)\n",(numberOfDays%365)/30);
    printf("%d Day(s)\n",(numberOfDays%365)%30);
}
