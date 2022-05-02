#include<stdio.h>
int evenorodd (int );

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if (evenorodd(n)==0)
    printf("even number");
    else 
    printf("odd number");
}
int evenorodd (int n)
{ 
    if(n%2==0)
    return 0;
    else 
    return 1;
    }