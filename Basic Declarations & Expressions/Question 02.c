/*

Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
    Number of days : 1329

    Expected Output :
        Years: 3
        Weeks: 33
        Days: 3

*/

#include <stdio.h>

void main(){
    int n;

    printf("Number of Days : ");
    scanf("%d",&n);

    printf("\n");
    printf("Years : %d\n",n/365);
    printf("Weeks : %d\n",(n%365)/7);
    printf("Days  : %d\n",((n%365)%7));
}
