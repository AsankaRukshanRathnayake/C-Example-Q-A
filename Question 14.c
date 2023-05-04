/*

Write a C program that reads an integer and checks the specified range to which it belongs.
Print an error message if the number is negative and greater than 80.
Ranges : [0,20],[21,40],[41,60],[61,80]

Test Data :
    Input an integer: 15

Expected Output:
    Range [0, 20]

*/

void main(){
    signed int x;

    printf("Input an Integer : ");
    scanf("%i",&x);

    if (x>=0 && x<=20)
        printf("Range [0,20]");
    else if (x>20 && x<=40)
        printf("Range [21,40]");
    else if (x>40 && x<=60)
        printf("Range [41,60]");
    else if (x>60 && x<=80)
        printf("Range [61,80]");
    else
        printf("Wrong input !\n");

}
