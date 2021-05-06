    #include<stdio.h>
    #include<math.h>
    int main(void)
    {
    double x[100];
    double a=0,b=1;
    double f_a = -1, f_b = 1, f_c = 0;
    int i=0;
    double temp_1 = 0, temp_2 = 0;
    temp_1 = (a*f_b)-(b*f_a);
    temp_2 = f_b - f_a;

    x[i] = temp_1/temp_2;
 printf("\n X_%d \t %.4lf \n",i,x[i]);

    while(1)
    {
        f_c =pow(x[i],3)+pow(x[i],2)-1;

        double check  = f_a * f_c;
        if(check>=0)
        {
            a = x[i];
        }
        else
        {
            b = x[i];
        }
              f_a = pow(a,3)+pow(a,2)-1;
              f_b = pow(b,3)+pow(b,2)-1;

              temp_1 = (a*f_b)-(b*f_a);
              temp_2 = f_b - f_a;

              x[i+1] = temp_1/temp_2;

                if(x[i] == x[i+1])
                {
                    break;
                }
                else if(i==7)
                {
                    break;
                }
                 printf(" X_%d \t %.4lf \n",(i+1),x[i+1]);
                i++;
    }
    printf(" \n Root Element :\t%.4lf",x[i]);


        getch();
        return 0;
    }
