#include<stdio.h>
int main()
{
    int total_seconds;
    scanf("%d", &total_seconds);
    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;
    printf("H:M:S-%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}