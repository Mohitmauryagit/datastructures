#include<stdio.h>
#include<math.h>
int main()
{
	int subA,subB,subC;
	float percent;
	 printf("Enter the marks obtain in subA, subB, subC");
	 scanf("%d%d%d",&subA,&subB,&subC);
	 
	 percent=(subA+subB+subC)/3;
	 
	/* if(subA<40 || subB<40 || subC<40)
	 printf("Fail");
	 else
	 {
	 	printf("Student is passed. Percent is %0.2f\n",percent);
	 	if(percent<50)
	 printf("3rd\n");
	 
	 else if(percent<60)
	 printf("2nd\n");
	 
	 else
	 printf("1st");
     }
	 
	 // ternary mrthod
	 */
	 
	 (subA<40 || subB<40 || subC<40)?printf("fail"):(percent<50)?printf("Pass in 3rd div percent %0.2f\n",percent):(percent<60)?printf("Pass in 2nd div percent %0.2f\n",percent):printf("Pass in 1st div percent %0.2f\n",percent);
	 
	 
	 
	 
	 
	 
	 
	 
}