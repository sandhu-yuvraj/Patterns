// Generates a right aligned pyramid
// Vertically flipped right triangle
// Similar to one which mario climbs in mario game
// Programmed in C
// My first pattern printing program
#include<stdio.h>
int main(void)
{
    int n;
    printf("What's n? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}