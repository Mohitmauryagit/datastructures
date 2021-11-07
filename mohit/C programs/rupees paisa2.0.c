#include<stdio.h>
#include<math.h>
int main()
{
	int rupees,paisa,rupeesT,rupees1;
	printf("Enter the amountin Rupees and Paisa",rupees,paisa);
	scanf("%d%d",&rupees,&paisa);
	
	rupees=rupees*100;
	rupees1=rupees+paisa;
	rupeesT=rupees1/100;
	paisa=paisa%100;
	
	
	printf("%d:%0.d",rupeesT,paisa);
	
	
}