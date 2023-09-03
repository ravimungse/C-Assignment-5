//2. Write a program to calculate the area of a circle.//
#include<stdio.h>
main()
{
	double a,b;
	printf("Enter the Radius of Circle in mm= ");
	scanf("%lf",&a);
	b=a*a*3.14159;
	printf("Area of Circle is = %lf",b);
	getch();
}
