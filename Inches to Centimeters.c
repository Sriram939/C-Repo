#include<stdio.h>
int main()
{
    int heightinches;
    scanf("%d", &heightinches);
    double heightcm = heightinches * 2.54;
    printf("%.2f\n", heightcm);
    return 0;
}