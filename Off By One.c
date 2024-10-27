#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    int sum = A + B;
    char result[10];
    sprintf(result, "%d1", sum);
    printf("%s\n", result);
    return 0;
}