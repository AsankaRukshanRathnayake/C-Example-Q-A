/*
Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
 Print the ID and salary (with two decimal places) of the employee for a particular month.

Test Data :
    Input the Employees ID(Max. 10 chars): 0342
    Input the working hrs: 8
    Salary amount/hr: 15000

Expected Output:
    Employees ID = 0342
    Salary = U$ 120000.00

*/

#include <stdio.h>

void main(){
    char employeeID[10];
    float totalWorkedHours;
    float amountPerHour;
    float salary;

    printf("Input the Employees ID(Max. 10 chars) : ");
    scanf("%s",employeeID);

    printf("Input the working hrs                 : ");
    scanf("%f",&totalWorkedHours);

    printf("Salary amount/hr                      : ");
    scanf("%f",&amountPerHour);

    printf("\n");

    salary=totalWorkedHours*amountPerHour;

    printf("Employees ID = %s\n",employeeID);
    printf("Salary       = U$ %.2f\n",salary);
}
