//programe for marks and percentage//
  #include<stdio.h>
  int main()
  {
    float math,eng,phy,chem,bio,num,marks,p;
    printf("enter the marks in math ");
    scanf("%f",&math);
     printf("enter the marks in eng ");
    scanf("%f",&eng);
     printf("enter the marks in phy ");
    scanf("%f",&phy);
     printf("enter the marks in chem ");
    scanf("%f",&chem);
     printf("enter the marks in bio ");
    scanf("%f",&bio);
    marks=math+eng+phy+chem+bio;
    printf("the total marks are %f",marks);
    num=marks/500;
    p=num*100;
    printf("the marks percentage is %f",p);
    return 0;
  }