//programe for lengthv  v  conversion//
#include<stdio.h>
int main()
{
    float d,m,feet,in,cm;
    printf("enter the distance in km ");
    scanf("%f",&d);
    m=1000*d;
    feet=3280.84*d;
    in=39370.1*d;
    cm=100000*d;
    printf("the distance in meters is %f\n",m);
    printf("the distance in feets is %f\n",feet);
    printf("the distance in inch is %f\n",in);
    printf("the distance in centimeter is %f\n",cm);
    return 0;
}