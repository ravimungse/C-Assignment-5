//9. Write a program to calculate the profit percentage upon selling a product. 
//Cost price and selling price are given by the user.
#include<stdio.h>
main()
{
	float a,b,c,d;
	printf(" Enter the Cost price= ");
	scanf("%f",&a);
	printf(" Enter the Selling price= ");
	scanf("%f",&b);
	c=b-a;
	d=c/b*100;
	printf(" Profit percentage = %g",d);
	getch();
}
