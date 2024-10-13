#include<stdio.h>
int main()
{
    int years;
    scanf("%d", &years);
    int last_two_digits = years % 100;
    printf("%02d\n", last_two_digits);
    return 0;
}