#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += arr[i];
        }
        else 
        {
            sum_odd += arr[i];
        }
    }
    printf("%d\n", abs(sum_even - sum_odd));
    return 0;
}