#include<stdio.h>
int main()
{
    int X, Y, R;
    scanf("%d%d%d", &X, &Y, &R);
    int N = X + R / 30;
    int max_plates = (N + Y - 1) / Y;
    printf("%d\n", max_plates);
    return 0;
}