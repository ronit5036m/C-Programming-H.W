#include<stdio.h>
int main(){
    int emp_id , work_hour, salary_par_hour;
    float month_salary;
    printf("Enter Employee id :- ");
    scanf("%d",&emp_id);

    printf("Enter total work hour in a day :- ");
    scanf("%d",&work_hour);

    printf("Enter amount recived per hour :- ");
    scanf("%d",&salary_par_hour);

    month_salary = (work_hour * salary_par_hour) * 30;

    printf("The employee id = %d\n",emp_id);
    printf("The employee monthly salary = %.2f\n",month_salary);
    
    return 0;
}