#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x;
	printf("Enter the value of a,b,c",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	if(a==0 && b==0)
	printf("This equation is not valid");
	else
	{
	
	printf("This equation is valid\n");
	if(a==0)
	{
		//bx + c==0, bx=-c, x=-c/b
		float result=-c/(float)b;
		printf("Result=%f\n",result);
	}
	else
	{
		float d=b*b-4*a*c;
		if(d<0)
		{
			//printf("Complex");
			// real part = -b/(2*a) imag part=sqrt(-d)/(2*a)
			
			float rp,ip;
			rp=(-b)/(2.0*a);
			ip=sqrt(-d)/(2.0*a);
			printf(" %f + i*%f\n",rp,ip);
			printf(" %f - i*%f\n",rp,ip);
	
		}
		else
		{
			//printf("Real");
			float x1,x2;
			d=sqrt(d);
			x1=(-b+d)/(2.0*a);
			x2=(-b-d)/(2.0*a);
			printf("%f%f",x1,x2);	
		}
	}
	
	
}
	
	
	
	
	return 0;
	
}