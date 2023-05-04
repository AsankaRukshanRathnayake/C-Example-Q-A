/*

Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.

Test Data :
    Input the number 1 : 5
    Input the number 2 : -4
    Input the number 3 : 10
    Input the number 4 : 15
    Input the number 5 : -1

Expected Output:
    Number of positive numbers: 3
    Number of negative numbers: 2

*/

void main(){
    signed int numbers[5];

    for (int i=0;i<5;i++){
        printf("Input the number %d : ",i+1);
        scanf("%i",&numbers[i]);
    }

    int positiveNumbers=0;
    int negativeNumbers=0;

    for (int i=0;i<5;i++){
        if (numbers[i]<0)
            negativeNumbers++;
        else if (numbers[i]>0)
            positiveNumbers++;
    }

    printf("Number of positive numbers : %d\n",positiveNumbers);
    printf("Number of negative numbers : %d\n",negativeNumbers);
}
