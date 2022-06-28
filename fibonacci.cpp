#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1;
	int c,n,i;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("The Fibonacci series is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a);
		c = a+b;
		a=b;
		b=c;
	}	
}
