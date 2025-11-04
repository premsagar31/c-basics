//Given Principal (P) , Rate of Interest (R), and Time Period (T). Calculate the Compound Interest (CI).
//Note 1: Assume that interest is compounded annully for only once.
//Note 2: Adjust the result to 2 decimal places after point
//Input Format
//Single line input contains three space-separated integers P, R, T-Principal,Rate of Interest,Time Period respectively.
//Output Format
//Print the Compound Interest in decimal with 2 decimal places.
//Constraints
//1000<=P<=50000 1<=T<=5
//Input-1
//5400
//8
//3
//Output-1
//1402.45
#include<stdio.h>
#include<math.h>
int main()
{
int p,r,t;
scanf("%d%d%d%d",&p,&r,&t);
float ap pow((1+r/ 100.0),t);
float cia-p;
printf("%.2f",ci);
return 0;
}
