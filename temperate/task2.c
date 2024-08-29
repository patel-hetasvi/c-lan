#include<stdio.h>
int main()
{
    int n,i = 0;

    printf("Enter an number: ");
    scanf("%d", &n);

    do {
        n <= 10;
        i++;
    } while (i != 0);

    printf("Number of digits: %d", i);
}