#include<stdio.h>
int main()
{
    int Physics, Chemistry, Biology, Mathematics, Computer_science;
    float percentage;
    scanf("%d%d%d%d%d", &Physics, &Chemistry, &Biology, &Mathematics, &Computer_science);
    int total = Physics + Chemistry + Biology + Mathematics + Computer_science;
    percentage = (float)total / 5;
    if (percentage >= 90)
    {
        printf("Grade A\n");
    }
   else if (percentage >= 80)
    {
        printf("Grade B\n");
    }
   else if (percentage >= 70)
    {
        printf("Grade C\n");
    }
   else if (percentage >= 60)
    {
        printf("Grade D\n");
    }
   else if (percentage >= 40)
    {
        printf("Grade E\n");
    }
    else 
    {
        printf("Grade F\n");
    }
    return 0;
}