#include<stdio.h>
int main()
{ 
char op;
float first,second;
printf("enter an operator (+,-,*,/),:,");
scanf("%c",&op);
printf("enter two operands");
scanf("%f%f",&first,&second);
switch(op)
{
case'+':
printf("%f+%f=%f",first,second,first+second);
break;
case'-':
printf("%f-%f=%f",first,second,first-second);
break;
case'*':
printf("%f*%f=%f",first,second,first*second);
break;
case'/':
printf("%f/%f=%f",first,second,first/second);
break;
//operator doesnot match any contact
default:
printf("error! operator is not correct");
}
return 0;
}
