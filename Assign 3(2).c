#include <stdio.h>

int Prime(int num, int i)
{
    if (i != 1) {
        if (num % i != 0) {
            return Prime(num, i - 1);
        }
        else {
            return 0;
        }
    }
    else {
        return 1;
    }
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Prime(num, num / 2) == 1)
        printf("Given number is prime number");
    else
        printf("Given number is not prime number");
return 0;
}