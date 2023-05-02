/*

Write a C program that accepts three integers and finds the maximum of three.

Test Data :
    Input the first integer: 25
    Input the second integer: 35
    Input the third integer: 15

Expected Output:
    Maximum value of three integers: 35

*/

#include <stdio.h>

int findMaximum(int a, int b, int c){
    if(a>=b){
        if(a>=c)
            return a;
        else
            return c;
    }
    else{
        if(b>=c)
            return b;
        else
            return c;
    }
}

void main(){
    int a,b,c;

    printf("Input the first integer   : ");
    scanf("%d",&a);

    printf("Input the second integer  : ");
    scanf("%d",&b);

    printf("Input the third integer   : ");
    scanf("%d",&c);

    printf("\n");
    printf("Maximum value of three integers : %d\n",findMaximum(a,b,c));

}
