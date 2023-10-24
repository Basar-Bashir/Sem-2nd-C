#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);
    while(n>0)
    {
        sum += n%10;
        n= n/10;
    }
    printf("The sum of digits of the entered number is %d", sum);
    return 0;
}