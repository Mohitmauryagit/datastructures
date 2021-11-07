#include<stdio.h>
int main()
{
	int month,year;
	printf("Enter the month number",month);
	scanf("%d",&month);
	switch(month)
	{
			case 4:
			printf("April with 30days in it");
			break;
			case 6:
			printf("June with 30days in it");
			break;
			case 9:
			printf("September with 30days in it");
			break;
			case 11:
			printf("November with 30days in it");
		    break;
			
			case 2:
		    
		    printf("Enter the year",year);
		    scanf("%d",&year);
		    
		    if(year%400==0 || (year % 4==0 && year %100 !=0))
         	printf("February with 29 days in it",year);
         	else
		    printf("February with 28 days in it",year);  
			   
			break;				
			
		    case 1:
		    printf("January with 31 days in it");
			break;
		    case 3:
		    printf("March with 31 days in it");
			break;
			case 5:
			printf("May with 31 days in it");
			break;
			case 7:
			printf("July with 31 days in it");
			break;
			case 8:
			printf("August with 31 days in it");
			break;
			case 10:
		    printf("October with 31 days in it");
			break;
			case 12:
		    printf("December with 31 days in it");
			break;	
			
			default:
			printf("Invalid month");
			break;
			
}
}