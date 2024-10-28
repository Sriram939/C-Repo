#include<stdio.h>
int main()
{
    int X, Y, H;
    scanf("%d%d%d", &X, &Y, &H);
    int totalcharges;
    if (H == 1)
    {
        totalcharges = X;
    }
    else 
    {
        totalcharges = X + (H - 1) * Y;
    }
    printf("%d\n", totalcharges);
    return 0;

}