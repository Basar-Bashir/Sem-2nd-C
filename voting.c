//program for eligibility for voting//
#include<stdio.h>
int main()
{
    int age;
    printf("\n Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("Sorry! You not are eligible for voting"); 
    }
    return 0;
}