#include<stdio.h>
#include<math.h>
int main(void)
{
    double x[100],Result = 0,N=3.2;
    int i=0;

    x[i] = (cos(N)+1)/3;

    printf(" x_%d\t%.4lf\n",i,x[i]);
   while(1)
   {
       x[i+1] = (cos(x[i])+1)/3;


       if(x[i]==x[i+1])
       {
           break;
       }
       else if(i==7)
       {
           break;
       }

        printf(" x_%d\t%.4lf\n",(i+1),x[i+1]);
       i++;
   }

printf("\n Root Element:\t%.4lf",x[i]);
    getch();
    return 0;
}
