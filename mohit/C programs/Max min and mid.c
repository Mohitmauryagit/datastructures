#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	int min,max,mid;
	
	printf("Enter a, b and c");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	// for max
	
	if(a>=b && a>=c)
	max=a;
	else
	if(b>=c)
	max=b;
	else
	max=c;
	printf("Max=%d",max);
	
	
	// for min
	
	
	if(a<=b && a<=c)
	min=a;
	else
	if(b<=c)
	min=b;
	else
	min=c;
	printf("\nmin=%d",min);
	
	// for mid
	
	mid=a+b+c-max-min;
	printf("\nmid=%d",mid);
}