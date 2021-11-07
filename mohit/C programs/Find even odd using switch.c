#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	switch(n%2)
	{
	
	
	case 0:
	printf("%d is even",n);
	break;
	
	default:
	printf("%d is odd",n);
	break;
}
}