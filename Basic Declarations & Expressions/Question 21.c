/*


Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs
(Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).

Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of
numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals:
 I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).

Test Data :
    Input the Coordinate(x,y):
    x: 25
    y: 15

Expected Output:
    Quadrant-I(+,+)

*/

void main(){
    int x,y;

    printf("Input the Coordinate (x,y) :\n");
    printf("x : ");
    scanf("%d",&x);
    printf("y : ");
    scanf("%d",&y);

    printf("\nQuadrant : ");
    if (x>=0){
        if (y>=0)
            printf("I (+,+)");
        else
            printf("II (+,-)");
    }
    else{
        if (y<=0)
            printf("III (-,-)");
        else
            printf("IV (-,+)");
    }


}
