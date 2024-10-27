#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int totalamount = N * 2000;
    int notesNeeded = totalamount / 500;
    printf("%d\n", notesNeeded);
    return 0;
}