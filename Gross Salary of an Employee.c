#include<stdio.h>
int main()
{
    float salary, HRA, DA, PF, grosssalary;
    scanf("%f", &salary);
    scanf("%f", &HRA);
    scanf("%f", &DA);
    PF = 0.12 * salary;
    grosssalary = salary + HRA + DA + PF;
    printf("%.2f\n", PF);
    printf("%.2f\n", grosssalary);
    return 0;
}