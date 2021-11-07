// 11:45 11:45 AM
//12:45 12:45 PM
//13:45 1:45 PM

//Rs 10, 250  Rs 12.50


#include<stdio.h>
int main()
{
	int hr,min;
	printf("Enter hr and min");
	scanf("%d%d",&hr,&min);
	
	if(hr>12)
	{
	
	hr=hr-12;
	printf("%d:%d PM",hr,min);
}
	else if(hr<12)
	printf("%d:%d AM",hr,min); 
	else
	printf("%d:%d PM",hr,min); 
	
}