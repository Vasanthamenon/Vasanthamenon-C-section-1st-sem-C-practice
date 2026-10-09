#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d%d",&x,&y);
 int num;
 scanf("\n%d",&num);
 switch(num)
 {
 case 1:
 printf("Addition:%d",x+y);
 break;
 case 2:
 printf("Subtraction:%d",x-y);
 break;
 case 3:
 printf("Multiplication:%d",x*y);
 break;
 case 4:
 printf("Division:%d",x/y);
 break;
 case 5:
 printf("Reminder:%d",x%y);
 break;
 
 default:
 printf("Error");
 }
 return 0;
 }
