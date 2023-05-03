/*

Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

Test Data :
    Input seconds: 25300

Expected Output:
    There are: 7 Hours : 1 Minutes :40 Seconds

*/

#include <stdio.h>

void main(){
    int seconds;

    printf("Input seconds : ");
    scanf("%d",&seconds);

    printf("There are : %d Hours : %d Minutes : %d Seconds \n",seconds/(60*60),(seconds%(60*60))/60,(seconds%(60*60))%60);

}
