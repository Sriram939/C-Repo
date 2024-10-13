#include<stdio.h>
int main()
{
    int base1, base2, height;
    scanf("%d", &base1);
    scanf("%d", &base2);
    scanf("%d", &height);
    double area = (double)(base1 + base2) * height / 2;
    printf("%.4f\n", area);
    return 0;
}