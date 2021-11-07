#include<stdio.h>
#include<math.h>
int main()
{
	int angle;
	printf("Enter the angle");
	scanf("%d",&angle);
	
	angle=angle%360;
	angle=angle+360;
	angle=angle%360;
	printf("%d",angle);
	
	
	
	
}