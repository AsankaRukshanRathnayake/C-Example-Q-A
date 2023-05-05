/*

Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.

Test Data :
    Input the first integer: 50
    Input the second integer: 99

Expected Output:
    Sum: 3521

*/

#include <stdio.h>

void main(){
    int a,b;

    printf("Input the first integer  : ");
    scanf("%d",&a);
    printf("Input the second integer : ");
    scanf("%d",&b);

    if (a>b){
        int temp=a;
        a=b;
        b=temp;
    }

    printf("\nSum : ");

    int sum=0;

    for (int i=a;i<=b;i++){
        if (i%17!=0){
            printf("%d ",i);
            sum+=i;
            printf("%d \n",sum);
        }
    }
    printf("%d\n",sum);
}
