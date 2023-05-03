/*

Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.

Test Data :
    Input the amount: 375

Expected Output:
    There are:
        3 Note(s) of 100.00
        1 Note(s) of 50.00
        1 Note(s) of 20.00
        0 Note(s) of 10.00
        1 Note(s) of 5.00
        0 Note(s) of 2.00
        0 Note(s) of 1.00


*/

#include <stdio.h>

int NOTES[7] = {100,50,20,10,5,2,1};

void main(){
    int amount,n;

    printf("Input the amount : ");
    scanf("%d",&amount);

    n=amount;

    printf("\nThere are : \n");

    for (int i=0;i<sizeof(NOTES);i++){
        printf("\t %d Note(s) of %4.2f\n",n/NOTES[i],(float)NOTES[i]);
        n=n%NOTES[i];
    }

}
