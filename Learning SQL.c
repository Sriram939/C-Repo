#include<stdio.h>
int main()
{
    int R, C, E;
    scanf("%d%d%d", &R, &C, &E);
    int totalrows = R + E;
    int totalcells = totalrows * C;
    printf("%d\n", totalcells);
    return 0;
}