/*

Write a C program that accepts two integers from the user and calculates the product of the two integers.

Test Data :
    Input the first integer: 25
    Input the second integer: 15

Expected Output:
    Product of the above two integers = 375

*/

#include <stdio.h>

int multiply(int a, int b){
    return a*b;
}

void main(){
    int a,b;

    printf("Input the first Integer  : ");
    scanf("%d",&a);

    printf("Input the second Integer : ");
    scanf("%d",&b);

    printf("\n");
    printf("Product of the above two integers : %d\n",multiply(a,b));
}
