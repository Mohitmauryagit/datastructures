#include<stdio.h>
int main()
{
	int month=5;
	switch(month)
	{
			case 4:
			case 6:
			case 9:
			case 11:
			printf("30");
			break;
			case 2:
			printf("28 or 29");
			break;				
			default:
			printf("31");
			break;
}
}