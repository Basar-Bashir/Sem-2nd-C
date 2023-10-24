//program for gross salary//
#include<stdio.h>
int main()
{
    float BS,DA,HRA,GS;
    printf("Enter the basic salary ");
    scanf("%f",&BS);
    DA=0.4*BS;
    HRA=0.2*BS;
    GS=DA+BS+HRA;
    printf("The groos salary is %f",GS);
    return 0;
}