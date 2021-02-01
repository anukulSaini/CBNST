#include<stdio.h>
#include <math.h>

float f(float x)
{
    return pow(x,3)-(4*x)-9;
}

int main()
{
    float a,b;
    while(1)
    {
        printf("Enter the guessed interval : ");
        scanf("%f%f",&a,&b);

        float x=f(a),y=f(b);
        
        if(x*y>0)
        {
            printf("Do you want to try again (y/n) : ");
            char ch;
            fflush(stdin);
            scanf("%c",&ch);
            if(ch=='n')
                return 0;
            else
                continue;
        }
        else if(x*y==0)
        {
            if(x==0)
                printf("%f is root",x);
            else
                printf("%f is root",y);
            return 0;
        }
        else
        {
            break;
        }
    }
    
    printf("Enter the no. of iterations : ");
    int n;
    scanf("%d",&n);
    printf("Enter the no. of decimal place in error : ");
    float e;
    scanf("%f",&e);
    float c=a*f(b)-b*f(a)/f(b)-f(a);
    printf("Value of c,i = %f,1\n",c);
    for(int i=1 ; i<n ; ++i)
    {
        float temp=c;

        if(f(a)*f(c)<0)
            b=c;
        
        else if(f(a)*f(c)>0)
            a=c;
        
        c=(a+b)/2;
        
        printf("Value of c,i = %f,%d\n",c,i+1);
        
        if((int)(c*pow(10,e))==(int)(temp*pow(10,e)))
        {
            printf("%f is root found at iteration %d\n",c,i+1);
            return 0;
        }
    }
    printf("Insufficient Iterations");
    return 0;
}