#include<stdio.h>
int main()
{
    int a1, a2, a3;

    printf("Enter the a1: ");
    scanf("%d", &a1);

    printf("Enter the a2: ");
    scanf("%d", &a2);

    a3 = 180 - (a1+a2);

    printf("a3 of the triangle = %d\n", a3);

}