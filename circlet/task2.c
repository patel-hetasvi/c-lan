#include<stdio.h>
int main()
{
    int r = 5;
    int n = 11;
    
    for (int i = 0; i < r; i++) 
        {
            for (int j = 0; j <= i; j++)
            {
            printf("%d ", n);
            n++;
            }
            printf("\n");
        }

}