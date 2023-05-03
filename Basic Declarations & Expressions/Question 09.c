/*

Write a C program to calculate the distance between two points.

Test Data :
    Input x1: 25
    Input y1: 15

    Input x2: 35
    Input y2: 10

Expected Output:
    Distance between the said points: 11.1803

*/

#include <stdio.h>
#include <math.h>

double findSquare(double a){
    return a*a;
}

double findDistance(double x1, double y1, double x2, double y2){
    //distance = sqrt ( (x1-x2)^2 + (y1-y2) ^2 )

    return sqrt(findSquare(x1-x2)+findSquare(y1-y2));
}

void main(){
    double x1,y1,x2,y2;

    printf("Input x1 : ");
    scanf("%lf",&x1);

    printf("Input y1 : ");
    scanf("%lf",&y1);

    printf("Input x2 : ");
    scanf("%lf",&x2);

    printf("Input y2 : ");
    scanf("%lf",&y2);

    printf("\n");
    printf("Distance between the said points : %.4lf\n",findDistance(x1,y1,x2,y2));

}
