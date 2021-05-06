#include<stdio.h>
#include<math.h>
int main(void)
{
double x[100],a=1,b=2;
double f_a = -5.5, f_b = 6;
int i=0;
double value = 0;
double f_c = 0;
x[i] = (a+b)/2;
printf(" %.4lf\n",x[i]);

while(1)
{
        f_c = 2*pow(x[i],3)-(2.5)*x[i]-5;

       value = f_a*f_c;

        if(value>=0)
        {
            a = x[i];
        }
        else
        {
            b = x[i];
        }
        f_a = 2*pow(a,3)-(2.5)*a-5;
        x[i+1] = (a+b)/2;

       printf(" %.4lf\n",x[i+1]);
        if(x[i]==x[i+1])
        {
            break;
        }
        else if(i==13)
        {
            break;
        }
        i++;
}

 printf("\n Root Element:\t%.4lf",x[i]);
    getch();
    return 0;
}
