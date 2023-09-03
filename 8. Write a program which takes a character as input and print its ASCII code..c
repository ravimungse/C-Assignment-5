//8. Write a program which takes a character as input and print its ASCII code.
#include<stdio.h>
main()
{
	char a;
	printf(" Enter the Character = ");
	scanf("%c",&a);
	int b=a;
	printf("\n ASCII code for Character %c = %d",a,b);
	getch();
}
