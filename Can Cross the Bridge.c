#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    int max_additional_weight = z - y;
    int max_mangoes = max_additional_weight / x;
    printf("%d\n", max_mangoes);
    return 0;
}