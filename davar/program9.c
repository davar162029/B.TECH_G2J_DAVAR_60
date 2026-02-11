
// Program 9 : To find the greatest of the two no
#include <stdio.h>
int main () {
int a , b ,c ;
printf("Enter the no a :");
scanf("%d",&a);
printf("Enter the no b:");
scanf("%d",&b);
printf("Enter the no c :");
scanf("%d",&c);

if(a>b)
{
    if(a>c)
    {
        printf("a=%d is greatest" , a);

    }
    else
    {
        printf("c = %d is greatest" ,c);
     
    
    }
}
else if(b>c)
{
    printf("b=%d is greatest", b );
}


return 0 ;
}