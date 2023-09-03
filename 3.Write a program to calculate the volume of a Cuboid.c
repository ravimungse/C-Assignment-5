//Write a program to calculate the volume of a Cuboid//
#include<stdio.h>
main()
{
	float l,h,w; //the volume of cuboid is calculated by this formula = heightxlengthxwidth//
	printf("Enter Length of Cuboid = ");
	scanf("%f",&l); 
	printf("Enter Height of Cuboid = ");
	scanf("%f",&h); 
	printf("Enter Width of Cuboid = ");
	scanf("%f",&w); 
	printf("The Volume of Cuboid = %f",l*w*h);
	getch();
}
