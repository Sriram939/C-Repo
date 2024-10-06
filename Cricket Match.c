#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d", &n,&m);
    int maxruns = m * 6 * 6;
    if (maxruns >= n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}