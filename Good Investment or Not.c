#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    if (X >= 2 * Y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}