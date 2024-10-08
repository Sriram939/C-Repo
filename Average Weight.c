#include<stdio.h>
int main()
{
    int average,w1,w2;
    scanf("%d%d%d", &average, &w1, &w2);
    int totalweight = average * 3;
    int w3 = totalweight - w1 - w2;
    printf("%d\n", w3);
    return 0;
}