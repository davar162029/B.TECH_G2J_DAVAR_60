//  Program 12 - switch case 

#include <stdio.h>
int main ()
{
int a,b;
char op;
printf(" Enter two operands");
scanf("%d%d",&a,&b);
printf("Enter an operator(+,-,*,/)");
scanf("  %c", &op);

switch(op)
{
case'+':
printf("addition = %d" , a+b);
break;

case'-':
printf("subtraction = %d" , a-b);
break;


case'*':
printf("multiplication  = %d" , a*b);
break;

case'/':
if(b==0)
// check
printf("Divison cant be performed");
else
printf("Divison = %f",(float)a/b);
break;
default:
printf("Incorrect operator");
}

return 0;


}