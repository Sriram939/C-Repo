#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int totalcost = 4 * X;
    if (totalcost <= 1000)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}