#include<stdio.h>
int main()
{
    char color_code;
    scanf("%c", &color_code);
    if (color_code == 'v')
    {
        printf("violet\n");
    }
    else if (color_code == 'I')
    {
        printf("Indigo\n");
    }
    else if (color_code == 'B')
    {
        printf("Blue\n");
    }
    else if (color_code == 'G')
    {
        printf("Green\n");
    }
    else if (color_code == 'Y')
    {
        printf("Yellow\n");
    }
    else if (color_code == 'O')
    {
        printf("Orange\n");
    }
    else if (color_code == 'R')
    {
        printf("Red\n");
    }
    else 
    {
        printf("-1\n");
    }
    return 0;
}