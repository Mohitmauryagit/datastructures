#include<stdio.h>

int main()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	/*
	switch(year==2000)
	{
		case 0:
			printf("Not equal");
			break;
			default:
				printf("Equal");
				break;
	}
	*/
	
	switch(year % 400)
	{
	
		case 0:
			printf("Leap Year");
			break;
			default:
				//***********************************
				switch(year % 4)
				{
					default:
						printf("Not Leap Year");
						break;
					case 0:
						//************************************
						switch(year % 100)
						{
							case 0:
								printf("Not Leap Year");
								break;
							default:
								printf("Leap Year");
								break;
							
							
						}
						
						//************************************
						break;
					
				}
				
				//*************************************
				break;
			}
			return 0;
}