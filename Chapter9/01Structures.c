#include<stdio.h>
#include<string.h>
struct employee{
int id;
char name[20];
float salary;
};
int main(){
struct employee e1;
e1.id = 100;
strcpy(e1.name ,"Smith");
e1.salary = 43000.75;

struct employee e2;
e2.id = 101;
strcpy(e2.name ,"Rupesh Raj");
e2.salary = 55000.50;

printf("The id of employee is %d\n",e1.id);
printf("The name of employee is %s\n",e1.name);
printf("The salary of employee is %.2f\n",e1.salary);
printf("*************************************\n");
printf("The id of employee is %d\n",e2.id);
printf("The name of employee is %s\n",e2.name);
printf("The salary of employee is %.2f\n",e2.salary);
return 0;
}
