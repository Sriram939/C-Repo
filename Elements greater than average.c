#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int average = sum / N;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= average)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}