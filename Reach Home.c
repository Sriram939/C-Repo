#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    int maxdistance = X * 5;
    if (maxdistance >= Y )
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
return 0;
}