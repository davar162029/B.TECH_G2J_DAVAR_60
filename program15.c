// To check the type of a triangle

#include <stdio.h>

int main ()
{ int a ,  b  , c ;

    printf("Enter the 1st side of a triangle");
    scanf("%d",&a);
    printf("Enter the 2nd side of a triangle");
    scanf("%d",&b);
    printf("Enter the 3rd side of a triangle");
    scanf("%d",&c);

if (a==b || a==c )
{
    printf("Given sides of a triangle are making isosceles triangle : ");

}

else if(a==b ||b==c || a==c )
{
    printf("Given sides of a triangle are making equilateral  triangle : ");
}

else
{

    printf("Given sides of a triangle are making Scalene  triangle :  ");
}


return 0;
}









