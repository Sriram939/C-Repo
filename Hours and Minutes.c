#include<stdio.h>
int main()
{
    int minutes;
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int remaningminutes = minutes % 60;
    printf("%d Hour(s) %d minute(s) \n", hours, remaningminutes);
    return 0;
}