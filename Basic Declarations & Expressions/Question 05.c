/*
Write a C program that accepts two item's weight and number of purchases (floating point values) and
calculates their average value.

Test Data :
    Weight - Item1 : 15
    No. of item1   : 5

    Weight - Item2 : 25
    No. of item2: 4

Expected Output:
Average Value = 19.444444

*/

#include <stdio.h>

void main(){
    float purchases[2][2]={0};

    float totalWeight=0;
    float totalItems=0;

    //get input
    for (int i=0;i<2;i++){
        printf("Weight - Item%d  : ",i+1);
        scanf("%f",&purchases[i][0]);

        printf("No. of -  Item%d : ",i+1);
        scanf("%f",&purchases[i][1]);

        printf("\n");
    }

    //calculate the total weight of the items and total number of the items.
    for (int i=0;i<2;i++){
        totalWeight+=purchases[i][0]*purchases[i][1];
        totalItems+=purchases[i][1];
    }

    printf("\n");
    printf("Average Value : %f\n",totalWeight/totalItems);
}
