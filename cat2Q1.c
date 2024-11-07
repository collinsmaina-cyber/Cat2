
#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];        
    int id;              
    char department[20]; 
    float salary;       
    char email[50];      
};

int main() {
    
    struct employee emp;

    strncpy(emp.name, "John Doe", sizeof(emp.name) - 1);
    emp.id = 12345;
    strncpy(emp.department, "Human Resources", sizeof(emp.department) - 1);
    emp.salary = 55000.50;
    strncpy(emp.email, "john.doe@company.com", sizeof(emp.email) - 1);

    
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
