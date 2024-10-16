#include<stdio.h>
int main()
{
    int radius;
    scanf("%d", &radius);
    const float pi = 3.14;
    float area = pi * radius * radius;
    float perimeter = 2 * pi * radius;
    printf("%.2f\n", area);
    printf("%.2f\n", perimeter);
    return 0;
}