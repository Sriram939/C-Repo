#include<stdio.h>
int main()
{
    int X, Y, Z;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    int totalamount = (X * 5) + (Y * 10);
    int maxchocolates = totalamount / Z;
    printf("%d\n", maxchocolates);
    return 0;
}