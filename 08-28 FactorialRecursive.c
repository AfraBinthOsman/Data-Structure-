//nazmus007
//Ghorar dim!!

//Factorial using recursion
#include <stdio.h>
double Factorial(int n);
void main()
{
    double fact;
    int n;
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    fact=Factorial(n);
    printf("\nFactorial of %d!=%0.1e",n,fact);
}
double Factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(n*Factorial(n-1));
}
