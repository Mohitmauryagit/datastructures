#include<stdio.h>
#include<math.h>
void main()
{
	int p,t,r,n;
	float si,ci;
	//this to take only one at a time
	printf("Press 1 to calculate SI, 2 for CI and 3 for both");
	scanf("%d",&n);
	
	
	
	
	
	//Here we are calculating Simple Intrest;
	printf("Enter the value of profit=",&p);
	scanf("%d",&p);
	printf("Enter the value of Rate=",&r);
	scanf("%d",&r);
	printf("Enter the value of Time=",&t);
	scanf("%d",&t);
	si=(p*r*t)/100.0;
	
	
	//Here we are calculating Ci;
	//pow(x,y)  x to the power y
	//pow(3,2)
	float x=1 + r/100.0;
	float y=t;
	ci=pow(x,y)*p-p;
	
	if(n==1 || n==3) 
	printf("Here is simple intrest=%0.2f",si);
	if(n==2 || n==3) 
	printf("\nHere is CI%0.2f",ci);
	
}