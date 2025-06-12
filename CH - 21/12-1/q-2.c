#include <stdio.h>

struct Employee
{
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    char emp_city[20];
    int emp_experience;
    char emp_company_name[20];
};


void main() {
    int n;
    printf("Enter Numbers of Employees : ");
    scanf("%d",&n);

    struct Employee e1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee ID : ");
        scanf("%d",&e1[i].emp_id);
        fflush(stdin);
        printf("Enter Your Name : ");
        scanf("%[^\n]",&e1[i].emp_name);
        printf("Enter Employee Age : ");
        scanf("%d",&e1[i].emp_age);
        fflush(stdin);
        printf("Enter Employee Role : ");
        scanf("%[^\n]",&e1[i].emp_role);
        printf("Enter Employee City : ");
        scanf(" %[^\n]",&e1[i].emp_city);
        printf("Enter Employee Experience : ");
        scanf("%d",&e1[i].emp_experience);
        fflush(stdin);
        printf("Enter Employee EX Company Name : ");
        scanf("%[^\n]",&e1[i].emp_company_name);
        printf("\n\n");
    }

    printf("\n\nEmployee Details\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee ID \t: %d\n",e1[i].emp_id);
        printf("Employee Name \t: %s\n",e1[i].emp_name);
        printf("Employee Age \t: %d\n",e1[i].emp_age);
        printf("Employee Role \t: %s\n",e1[i].emp_role);
        printf("Employee City \t: %s\n",e1[i].emp_city);
        printf("Employee Experience \t: %d\n",e1[i].emp_experience);
        printf("Employee Ex Company Name \t: %s\n",e1[i].emp_company_name);
        printf("\n");
        printf("-------------------------------------------------------------");
        printf("\n\n");
    }
    
    
}