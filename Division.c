#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 >= && num1 <= 10000 && num2 >= 1 && num2 <= 10000 && num1 >= num2)
    {
        printf("%d\n", num1 / num2);
    }
    else 
    {
        printf("Input values are out of the defined constrains.\n");
    }
    return 0;

}