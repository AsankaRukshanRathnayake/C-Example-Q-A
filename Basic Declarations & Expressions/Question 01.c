//--Write a C program to compute the perimeter and area of a circle with a radius given as user input.

#include <stdio.h>
#include <math.h>

#define PI 3.141593

double getPerimeter(double r){
    return 2*PI*r;
}

double getArea(double r){
    return PI*r*r;
}

void main(){
    double radius;

    printf("Enter radius of the circle : ");
    scanf("%lf",&radius);

    printf("Perimeter of the Circle    : %lf\n",getPerimeter(radius));
    printf("Area of the Circle         : %lf\n",getArea(radius));
}


