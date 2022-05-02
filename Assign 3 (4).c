#include<stdio.h>
int swap (int ,int );
int main()
{
    int n1,n2;
    printf("enter2 numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("1st number is %d \n",n1);
    printf ("2nd number is %d \n ",n2);
    printf ("values after swapping\n");
    swap(n1,n2);
    
}
 int swap(n1,n2)
{
    int a=0;
    a=n1;
    n1=n2;
    n2=a;
    printf ("value of 1st number is %d\n",n1);
    printf(" value of 2nd number is %d\n",n2);
    }
