#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 if(n>=90 && n<=100)
 printf("A Grade");
 else if(n>=70 && n<90)
 printf("B Grade");
 else if(n>=50 && n<70)
 printf("C Grade");
 else if(n<50 && n>=1)
 printf("D Grade");
 else 
 printf("Error");
 return 0;
}
