/*
Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
(excluding the specified two numbers)

Test Data :
    Input the first integer: 25
    Input the second integer: 45

Expected Output:
30
31
37
38
44

*/

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

    printf("\n");

    for (int i=a+1;i<b;i++){
        if (i%7==2 || i%7==3)
            printf("%d\n",i);
    }
}
