/*

Write a C program to calculate the average mathematics marks of some students.
Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
Test Data :
Input Mathematics marks (0 to terminate):
10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50

*/

void main(){
    printf("Input Mathematic marks (0 to terminate) :\n");

    float totalMarks=0;
    int countOfStudents=0;
    float marks;

    do{
        scanf("%f",&marks);
        totalMarks+=marks;
        if (marks>0)
            countOfStudents++;
    }while(marks>0);

    printf("\nAverage marks in Mathematic : %.2f\n",(totalMarks/countOfStudents));
}
