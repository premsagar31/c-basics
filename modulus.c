//Program Description
//Take two numbers num1 and num2 as input from stdin and you need to find modulus of them.
//Input Format
//Two different lines of input contains two integers num1 and num2
//Output Format
//You need to print the modulus of num1 and num2
//Constraints
//1<=num1,num2<=10000
//Input-1
//102
//60
//Output-1
//42
#include<stdio.h>
int main()
{
int n1, n2;
scanf("%d%d", &n1,&n2);
int num=n1%n2;
printf("%d",num);
}
