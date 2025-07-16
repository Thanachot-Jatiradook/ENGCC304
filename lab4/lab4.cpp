#include <stdio.h>

int main() {
    char Employees_ID [11];
    float Working_Hours = 0;
    float Salary = 0.0f,result = 0.0f ;

    printf("Input the Employees ID:" );
    scanf("%s", Employees_ID);
    printf("Input the working hrs:");
    scanf("%f", &Working_Hours);
    printf("Salary amount/hr:");
    scanf("%f", &Salary);

    result = Salary * Working_Hours;

    printf("Expected Output:\n");
    printf("Employees ID =%s\n", Employees_ID);
    printf("Salary = U$%.2f",result );

    return 0;
}//end main function
