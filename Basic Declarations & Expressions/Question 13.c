/*

Write a C program that reads 5 numbers and sums all odd values of them.

Test Data :
    Input the number 1 : 11
    Input the number 2 : 17
    Input the number 3 : 13
    Input the number 4 : 12
    Input the number 5 : 5

Expected Output:
    Sum of all odd values: 46

*/

void main(){
    int numbers[5];

    for (int i=0;i<5;i++){
        printf("Input the number %d : ",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("\n");

    int sum=0;

    for (int i=0;i<5;i++){
        if (numbers[i]%2!=0)
            sum+=numbers[i];
    }

    printf("Sum of all odd values : %d\n",sum);
}
