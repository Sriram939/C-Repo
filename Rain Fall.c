#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if ( x < 3)
    {
        printf("LIGHT\n");
    }
    else if ( x >= 3 && x < 7)
    {
        printf("MODERATE\n");
    }
    else if ( x >= 7)
    {
        printf("HEAVY\n");
    }
    return 0;
}