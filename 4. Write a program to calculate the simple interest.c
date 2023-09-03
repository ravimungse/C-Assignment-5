//4. Write a program to calculate the simple interest
#include<stdio.h>
main()
{
	//formula to calculate simple interest needs Three input's
	//1.principle amount - initial amount invested or borrowed
	//2.Rate of annual interest 3. time period in years
	float a,b,c,d;
	printf("Enter Principle amount = ");
	scanf("%f",&a);
	printf("Enter Rate of interest = ");
	scanf("%f",&b);
	printf("Enter Time Period in Years = ");
	scanf("%f",&c);
	d=a*b*c/100;//formula for calculating simple interest= (principle amount*annual interest rate*Time)/100
	printf("Simple Interest for amount you've Entered for given period is  = %f",d);
	getch();
}
