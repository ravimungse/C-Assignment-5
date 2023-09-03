//10. Write a program to calculate the area of a triangle where base and height of the triangle are given.
#include<stdio.h>
main()
{
	float base,height,area;
	printf(" Enter the base = ");
	scanf("%f",&base);
	printf(" Enter the height = ");
	scanf("%f",&height);
	area=base*height/2;
	printf(" Area of Triangle = %g",area);
	getch();
}
