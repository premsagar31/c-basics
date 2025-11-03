//Vowel or Consonant
//Program Description
//You're given a character ch. Figure out whether it's an Vowel or Consonant.
//Input Format
//A single line input containg one alphabet.
//Output Format
//Print the output according to the discription.
//Constraints
//Given character is in the range a-z or A-Z
//Input-1
//a
//Output-1
//VOWEL
#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch == 'A' || ch=='a'||
ch=='E' || ch=='e'||
ch=='1' || ch=='i'||
ch=='0' || ch=='0'||
ch=='U' || ch=='u')
{
printf("VOWEL");
}
else
{
printf("CONSONANT");
}
 }
