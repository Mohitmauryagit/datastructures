#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	int mid;
	
	printf("Enter the first value=",a);
	scanf("%d",&a);
	
	printf("Enter the Second value=",b);
	scanf("%d",&b);
	
	printf("Enter the third value=",c);
	scanf("%d",&c);
	
	
	if(  a>=b && a<=c  || a>=c && a<=b )
	mid=a;
	else
	if(  b>=a && b<=c  || b>=c && b<=a )
	mid=b;
	else
	mid=c;
	printf("Mid = %d",mid);
}