#include<stdio.h>
int main()
{
   int n;
   
   printf("enter any number: ");
   scanf("%d",&n);
   
  (n % 2==0) 
  ? printf("%d is even\n",n) 
  : printf("%d is odd\n",n);
}