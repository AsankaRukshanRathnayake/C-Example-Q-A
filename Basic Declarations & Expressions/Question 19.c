/*

Write a C program that accepts some integers from the user and finds the highest value and the input position.

Test Data :
    Input 5 integers:
    5
    7
    15
    23
    45

Expected Output:
    Highest value: 45
    Position: 5

*/

#include <stdio.h>

void main(){
    int numbers[5];

    printf("Input 5 integers :\n");
    for (int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }

    int max=numbers[0];
    int maxPosition=0;

    for (int i=1;i<5;i++){
        if (max<numbers[i]){
            max=numbers[i];
            maxPosition=i+1;
        }
    }

    printf("Highest Value : %d\n",max);
    printf("Position      : %d\n",maxPosition);
}
