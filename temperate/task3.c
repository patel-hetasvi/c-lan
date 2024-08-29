#include<stdio.h>
int main()
{
   int n, sum = 0, fD, lD;

    printf("Enter any number to find the sum of the first and last digit: ");
    scanf("%d", &n);

    lD = n % 10;
    fD = n;
    while (n >= 10) {
        n = n / 10;
    }
    fD = n;

    sum = fD + lD;

    printf("Sum of the first and last digit = %d\n", sum);
}