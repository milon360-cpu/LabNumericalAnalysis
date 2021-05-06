    #include<stdio.h>
    #include<math.h>
    int main(void)
    {
    double x[100];
    double f ,f_ ;

    int i=0;
    x[i] = 1-((-5.5)/(3.5));
    printf(" x_%d:\t%.4lf\n",i,x[i]);
    while(1)
    {
                f = 2*pow(x[i],3)-2.5*x[i]-5;
                f_ = 6*pow(x[i],2)-2.5;

                x[i+1] = x[i]-(f/f_);

                if(x[i]==x[i+1])
                {
                    break;
                }
                else if(i==5)
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
