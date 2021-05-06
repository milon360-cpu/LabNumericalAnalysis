#include<stdio.h>
#include<math.h>
int main(void)
{
    int i=0;
    double N=0.5;
    double x[100];

     double Result = sqrt(1/(N+1));
     x[i] = Result;

    printf("\n x_%d =  %.2f\n",i,x[i]);
    while(1)
    {

             x[i+1] = sqrt(1/(x[i]+1));
             if(x[i]==x[i+1])
             {
                 break;
             }
             else if(i==6)
             {
                 break;
             }
             printf(" x_%d =  %.2f\n",(i+1),x[i+1]);
             i++;

    }

        printf("\n Root Element :\t%.2lf",x[i]);

getch();
return 0;
}
