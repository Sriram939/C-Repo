#include<stdio.h>
int main()
{
    int CP, SP;
    scanf("%d%d", &CP, &SP);
    double loss = CP - SP;
    double losspercentage = (loss / CP) * 100;
    printf("%.2f\n", losspercentage);
    return 0;
}