// Program 10 : Accept marks of 5 subjects 
#include <stdio.h>
int main () 
{
int a , b , c , d , e ;
float sum,per;
printf("Enter the marks of a ");
scanf("%d",&a);
printf("\nEnter the marks of b");
scanf("%d",&b);
printf("Enter the marks of c ");
scanf("%d",&c);
printf("\nEnter the marks of d ");
scanf("%d",&d);
printf("\nEnter the marks of e ");
scanf("%d",&e);
sum =  a + b + c + d + e ;
per = sum/5;

if(per>=90&&per<=100)
{
    printf("\nGRADE A ");

}
else if(per>=80&&per<90)
{
    printf("GRADE B");
}

else if(per>=60&&per<80)
{
    printf("\nGRADE C ");
}

else if(per<60)
{
    printf("FAIL");
}
return 0;
}
