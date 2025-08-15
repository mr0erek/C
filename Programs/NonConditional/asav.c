/* 
ASAV stands for Area, SurfaceArea, Volume of sphere XD
Now we know the formulas right!! huh? XD
Area of the 2D Circle = PI R^2 
Area of 3D circle or sphere = 4 * area of 2D circle
Volume of sphere = 4/3 PI R^3 
*/

#include<stdio.h>
#include<math.h>

int main (){
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // as we needed constant. not to be change while running program.
    printf("Enter the radius : ");
    scanf("%lf", &radius);
    area = (PI * pow(radius,2)); //area of circle 2D
    surface_area = (4 * area); //area of hemisphere or 3D circle
    volume = ((4.0/3.0)*PI*(pow(radius,3)));
    printf("\nArea : %.2lf", area);
    printf("\nSurface Area: %.2lf", surface_area);
    printf("\nVolume: %.2lf", volume);
    return 0;
}