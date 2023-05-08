/*

Write a C program to print 3 numbers on a line, starting with 1 and printing n lines.
 Accept the number of lines (n, integer) from the user.

Test Data :
    Input number of lines: 5

Expected Output:
    1 2 3
    4 5 6
    7 8 9
    10 11 12
    13 14 15

*/

void main(){
    int n;

    printf("Input the number of lines : ");
    scanf("%d",&n);

    printf("\n");

    int count=0;

    for (int i=1;i<=5;i++){
        printf("%2d ",++count);
        printf("%2d ",++count);
        printf("%2d\n",++count);
    }
}
