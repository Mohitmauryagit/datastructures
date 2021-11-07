#include<stdio.h>
#include<math.h>
void main()
{
	int p,t,r;
	float si;
	printf("Enter the value of profit=",&p);
	scanf("%d",&p);
	printf("Enter the value of Rate=",&r);
	scanf("%d",&r);
	printf("Enter the value of Time=",&t);
	scanf("%d",&t);
	si=(p*r*t)/100.0;
	printf("Here is simple intrest=%0.2f",si);
}