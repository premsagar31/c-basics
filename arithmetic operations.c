//Program Description
//Perform all arithmetic operations on given two numbers num1,num2.
//Input Format
//Single line input contains two space-separated integers num1 and num2.
//Output Format
//Print the output of all Arithmetic Operations.
//Constraints
//1<=num1,num2<=1000 num1>num2
//Input-1
//10
//3
//Output-1
//Sum:13
//Difference:7
//Product:30
//Quotient:3
//Remainder:1
#include<stdio.h>
int main()
{
int n1, n2,s,d,p,,r;
scanf("%d%d", &n1, n2);
s=m+n2;
d=n1-n2;
p=n1*n2;
m=n1/n2;
r=n1%n2;
printf("Sum:%d",s);
printf("\nDifference:%d",d);
printf("\nProduct:%d",p);
printf("\nQuotient:%d",m);
printf("\nRemainder:%d",r);
}
