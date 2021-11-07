#include<stdio.h>
#include<math.h>
int main()
{
	int rupees,paisa,rupeesT,rupees1;
	printf("Ropees and paisa=",rupees,paisa);
	scanf("%d%d",&rupees,&paisa);
	
	rupees=rupees*100;
	rupees1=rupees+paisa;
	rupeesT=rupees1/100;
	paisa=paisa%100;
	if(paisa<10)
	printf("Rs:- %d:0.%d",rupeesT,paisa);
	else
	printf("Rs:- %d:%d",rupeesT,paisa);
	
    
	
	
	
	
	
}