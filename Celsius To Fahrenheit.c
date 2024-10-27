#include<stdio.h>
int main()
{
    int c;
    scanf("%d", &c);
    double F = (9.0 / 5.0 * c) + 32;
    printf("%.2f\n", F);
    return 0;
}