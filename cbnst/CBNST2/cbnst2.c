
#include<stdio.h> 

double func(double x) 
{ 
    return x*x*x - x*x + 2; 
} 
  

void bisection(double a, double b) 
{ 
    if (func(a) * func(b) >= 0) 
    { 
        printf("You have not assumed right a and b\n"); 
        return; 
    } 
    double e =0.01;
    int c = a; 
    while ((b-a) >= e) 
    { 
        // Find middle point 
        c = (a+b)/2; 
  
        // Check if middle point is root 
        if (func(c) == 0.0) 
            break; 
  
        // Decide the side to repeat the steps 
        else if (func(c)*func(a) < 0) 
            b = c; 
        else
            a = c; 
    } 
    printf(" Root calculated is = %lf\n",c);
} 
  
 
int main() 
{ 
 
    
    double a =-10, b = 20; 
    bisection(a, b); 
    return 0; 
} 