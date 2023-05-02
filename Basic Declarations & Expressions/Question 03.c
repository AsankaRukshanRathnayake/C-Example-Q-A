/*
Write a C program that accepts two integers from the user and calculates the sum of the two integers.

Test Data :
    Input the first integer: 25
    Input the second integer: 38

    Expected Output:
Sum of the above two integers = 63

*/

#include <stdio.h>

int add(int a, int b){
    return a+b;
}

void main(){
    int a,b;

    printf("Input the first Integer  : ");
    scanf("%d",&a);

    printf("Input the second Integer : ");
    scanf("%d",&b);

    printf("\n");
    printf("Sum of the above two integers : %d\n",add(a,b));
}
