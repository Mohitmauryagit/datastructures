//  


/*
percent=55;
switch(percent/10)
0-39 0,1,2,3 Fail
40-49    4 3rd
50-59   5 2nd
defualt: 1st


hr = 0-11, hr/12 = 0

default >=12   12  13 to 23  12/13=0, 13 to 23 =1
switch(hr/13)
12     0
>12 1




*/

#include<stdio.h>

int main()
{
	int subA,subB,subC,percent;
	printf("Enter marks of Subject A,B,C:-");
	scanf("%d%d%d",&subA,&subB,&subC);
	
	percent=(subA+subB+subC)/3;
	
	switch(percent/10)
	{
			case 0:
			case 1:
			case 2:
			case 3:
			printf("Fail");
			break;
			case 4:
			printf("Passed with 3rd grade");
			break;
			case 5:
			printf("Passed with 2nd grade");
			break;
			default:
				printf("Passed with 1st grade");
				break;
	}
	
}