#include<stdio.h>
#include<math.h>
int main()
{
	int angle;
	printf("Enter the angle");
	scanf("%d",&angle);
	
	if(angle<=90)
	printf("It lies in 1st quadrent");
	else if(angle>90 && angle<=180)
	printf("It lies in 2nd quadrent");
	else if(angle>180)
	printf("It lies in 3rd quardent");
	else
	printf("It lies in 4th quardent");
	
	
	
}