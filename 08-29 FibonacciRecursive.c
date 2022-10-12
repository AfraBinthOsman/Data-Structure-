//Factorial using recursion
#include <stdio.h>
double Fibonacci(int n);
void main()
{
    double fibo;
    int n,i;
    printf("\n Please enter the value of n ? ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     fibo=Fibonacci(i);
     printf(" %0.0f  ",fibo);
    }
}
double Fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    else
        return(Fibonacci(n-2)+Fibonacci(n-1));
}
