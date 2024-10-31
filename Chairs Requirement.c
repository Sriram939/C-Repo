#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d", &X, &Y);
    int extrachairs = X - Y;
    if (extrachairs > 0)
    {
        printf("%d\n", extrachairs);
    }
    else 
    {
        printf("0\n");
    }
    return 0;
}