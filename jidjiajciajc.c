#include<stdio.h>
struct Employee
 {  
char name[20];  
int id,basic;  
float salary; };
int main()
{  struct Employee e;
 float ta,da,hra;    
printf("\nEnter the details of the Employee\n");
 scanf("\n%s %d %d",e.name,&e.id,&e.basic);    ta=0.2 * e.basic;  da=0.4 * e.basic;  hra=0.15 * e.basic;    e.salary=e.basic + ta +da + hra;    
printf("\nthe details of the employee are\n");  
printf("\n %s \n %d \n %.2f \n",e.name ,e.id ,e.salary);    
return 0; }