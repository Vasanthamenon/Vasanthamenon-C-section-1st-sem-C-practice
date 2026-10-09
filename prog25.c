#include<stdio.h>
int main()
{
 float bill,per;
 scanf("%f",&bill);
 scanf("%f",&per);
 float dis=bill*per/100;
 printf("\n%.2f",dis);
 printf("\n%.2f",bill-dis);
 return 0;
 }
