#include<stdio.h>
#include<math.h>
int main()
{
	int rupees,paisa,paisa1,paisa2;
	printf("Enter the amountin Rupees and Paisa",rupees,paisa);
	scanf("%d%d",&rupees,&paisa);
	paisa1=paisa/100;
	paisa2=paisa%100;
	rupees=rupees+paisa1;
	printf("%d.%d",rupees,paisa2);
	
	
	
	
	
}