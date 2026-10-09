#include<stdio.h>
int main()
{
 int x,y,z;
 scanf("%d%d%d",&x,&y,&z);
 int sp=x*y,cp=x*z,profit=sp-cp-100;
 printf("Profit = %d",profit);
 return 0;
 }
