/*

Write a C program to print a number, its square and cube, starting with 1 and printing n lines.
Accept the number of lines (n, integer) from the user.

Test Data :
    Input number of lines: 5

Expected Output:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125

*/

void main(){
    int n;

    printf("Input the number of lines : ");
    scanf("%d",&n);

    printf("\n");

    for (int i=1;i<=n;i++){
        printf("%4d %4d %4d\n",i,i*i,i*i*i);
    }
}
