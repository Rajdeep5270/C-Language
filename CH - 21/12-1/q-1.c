#include<stdio.h>

struct Student {
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[20];
};

void main() {

    struct Student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Your ID : ");
        scanf("%d",&s1[i].stu_id);
        fflush(stdin);
        printf("Enter Your Name : ");
        scanf("%[^\n]",&s1[i].stu_name);
        printf("Enter Your Age : ");
        scanf("%d",&s1[i].stu_age);
        fflush(stdin);
        printf("Enter Your Course : ");
        scanf("%[^\n]",&s1[i].stu_course);
        printf("Enter Your City : ");
        scanf(" %[^\n]",&s1[i].stu_city);
        printf("Enter Your Standard : ");
        scanf("%d",&s1[i].stu_standard);
        fflush(stdin);
        printf("Enter Your School Name : ");
        scanf("%[^\n]",&s1[i].stu_school);
        printf("\n\n");
    }

    printf("\n\nStudents Details\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student ID \t: %d\n",s1[i].stu_id);
        printf("Student Name \t: %s\n",s1[i].stu_name);
        printf("Student Age \t: %d\n",s1[i].stu_age);
        printf("Student Course \t: %s\n",s1[i].stu_course);
        printf("Student City \t: %s\n",s1[i].stu_city);
        printf("Student Standard : %d\n",s1[i].stu_standard);
        printf("Student School Name : %s\n",s1[i].stu_school);
        printf("\n");
        printf("------------------------------------------------");
        printf("\n\n");
    }
    
    

}