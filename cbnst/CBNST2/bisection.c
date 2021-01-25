#include<stdio.h> 

double func(double x) 
{ 
    return x*x*x - 2*x*x + 3; 
} 

double c ;
  

void bisection(double a, double b) 
{ 
    if (func(a) * func(b) >= 0) 
    { 
        printf("You have not assumed right a and b\n"); 
        return; 
    } 
    double e =0.01;
     c = a; 
    while ((b-a) >= e) 
    { 
         
        c = (a+b)/2; 
  
   
        if (func(c) == 0.0) 
            break; 
  

        else if (func(c)*func(a) < 0) {
             b = c; 
             printf("Root = %lf\n",c);
        }
        else
        {
            a = c;
             printf("Root = %lf\n",c);
        }
             
    } 
} 
  
 
int main() 
{ 
 
    
    double a =-10, b = 20; 
    bisection(a, b); 
     printf(" Root calculated is = %lf\n",c);
    return 0; 
} 