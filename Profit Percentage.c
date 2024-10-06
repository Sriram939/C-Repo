#include<stdio.h>
int main()
{
    int CP, SP;
    scanf("%d%d", &CP , &SP);
    double profit = SP - CP;
    double profitpercentage = (profit / CP) * 100;
    printf("%.2f\n", profitpercentage);
    return 0;
}