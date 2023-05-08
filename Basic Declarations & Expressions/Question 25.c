/*

Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.

Test Data :
    Input number of lines: 5
    Number of characters in a line: 6

Expected Output:
    1 2 3 4 5 6
    7 8 9 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30

*/

void main(){
    int p, q;

    printf("Input the number of lines      : ");
    scanf("%d",&p);
    printf("Number of characters in a line : ");
    scanf("%d",&q);

    int count = 0;

    for (int i=1;i<=p;i++){
        for (int j=1;j<=q;j++)
            printf("%3d",++count);
        printf("\n");
    }
}
