#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    int attacks = B / A;
    printf("%d\n", attacks);
    return 0;
}