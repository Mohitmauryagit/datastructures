#include<stdio.h>
#include<math.h>
int main()
{
   int i=10;
   int t=1;
   for(i=1;i<=10;i++)
   printf("%d,",i);	
   
   
   
   printf("\nEven numbers=");
   for(i=2;i<=10;i=i+2)
   printf("%d,",i);
   
   printf("\nReverse=");
   for(i=10;i>=1;i=i-2)
   printf("%d,",i);
   
   
   
   
   	
   printf("\nOdd numbers=");
   for(i=1;i<=10;i=i+2)
   printf("%d,",i);
   
   
   printf("\nReverse=");
   for(i=9;i>=1;i=i-2)
   printf("%d,",i);
   
   	
   
   
   
   
   /* 1,4,9,16,,,64,81,100 */
   printf("\n");
   for(i=1;i<=10;i++)
   printf("%d,",i*i);
   
   printf("\nReverse");
   for(i=10;i>=1;i--)
   printf("%d,",i*i);	
   
   
   /* 2,6,12,20,,,,56,72,90 */
   printf("\n");
   for(i=1;i<=9;i++)
   printf("%d,",i*(i+1));
   
   
   
   /* 1,-1,1,-1,1-1,1-1,, */
   printf("\n");
   for(i=1;i<=10;i++)
   if(i % 2==0)
   printf("%d,",1);
   else
   printf("%d,",-1);
   
   printf("\nReverse=");
   for(i=1;i<=10;i++)
   if(i % 2==0)
   printf("%d,",-1);
   else
   printf("%d,",1);
   
   
   
   
    /* 1,-2,3,-4,5,-6,7,-8,9,-10 */
    printf("\n");
   for(i=1;i<=10;i++)
   if(i % 2==0)
   printf("%d,",-i);
   else
   printf("%d,",i);
   
   
   
   
   
   
   
   
   
   
}