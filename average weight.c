//Program Description
//The average weight of a group of three boys is X kgs. The individual weights (in kgs) W1 (Boy1 ) and W2(Boy2) are given. Find the weight of the third boy.
//Input Format
//A single line input contains three integers Average, W1 and W2-Average,Weight of Boy1,Weight of Boy2 respectively.
//Output Format
//Print the weight of third boy.
//Constraints
//1<=Average,W1,W2<=100
//Input-1
//50 40 50
//Output-1
//60
//1
#include<stdio.h>
 int main()
{
int x,w1,w2;
scanf("%d %d %d",&x, &w1, &w2);
int w3 (3*x)-(w1+w2);
printf("%d",w3);
return 0;
}
