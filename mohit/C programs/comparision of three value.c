#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	int max;
	printf("Enter first value",a);
	scanf("%d",&a);
	printf("Enter seconf value",b);
	scanf("%d",&b);
	printf("Enter third value",c);
	scanf("%d",&c);
	// method if else ladder

/*	if(a>=b && a>=c)
	max=a;
	else 
	if(b>=c)	
	max=b;
	else
	max=c;
	printf("%d",max);
	*/
	
	
	// ternacy method
max=	(a>=b && a>=c)?a:(b>=c)?b:c;
	printf("%d",max);
	
	// method nested if else using a>=b
	
/*
	if(a>=b)
	if(a>=c)
	max=a;
	else
	max=c;
	else
	if(b>=c)
max=b;
else
max=c;
printf("\n%d",max);

*/


// method using a<b ||or a<c

/*

if(a<b || a<c)
if(b>=c)
max=b;
else
max=c;
else
max=a;
printf("\n%d",max);

*/


// ternary method


	
	
	
	
}