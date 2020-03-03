#include <stdio.h>
void main()
{
   int i=1, sum=0,x;
   float average;
   printf("enter x\n");
   scanf("%d",&x);
   while (i<=x)
   {
       sum=i+sum;
       i++;
   }
    printf("print the sum=%d\n",sum);
    {
        average=(float)sum/x;
        printf("print the average%f",average);
    }

}

