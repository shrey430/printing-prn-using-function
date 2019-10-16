#include <stdio.h>
long long int input();
void display(long long int);
int main()
{
	long long int c;
	c= input();
	display(c);
}

long long int input()
{	
	long long int b;
	printf("Enter PRN:");
	scanf("%lld",&b);
	return b;
}
void display(long long int a)
{
	printf("PRN is: %lld",a);
}	
