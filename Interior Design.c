#include<stdio.h>
int main()
{
    int X1, Y1, X2, Y2;
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    int totalcoststyle1 = X1 + Y1;
    int totalcoststyle2 = X2 + Y2;
    int finalcost = (totalcoststyle1 < totalcoststyle2) ? totalcoststyle1 : totalcoststyle2;
    printf("%d\n", finalcost);
    return 0;
}