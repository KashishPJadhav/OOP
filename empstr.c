#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
char nm[30];
char id[10];
char des[20];
char mb[15];
float bs;
float da;
float hra;
float ts;
};
int main()
{
struct employee e[10];
int i,n;
printf("\nEnter No. of employees : ");
scanf("%d",&n);
printf("\nEnter details : \n");
for(i=0;i<n;i++)
{
printf("\nEnter Name : ");
scanf("%s",&e[i].nm);
printf("\nEnter Employee ID : ");
scanf("%s",&e[i].id);
printf("\nEnter Mobile no. : ");
scanf("%s",&e[i].mb);
printf("\nEnter Designation : ");
scanf("%s",&e[i].des);
printf("\nEnter Basic Salary : ");
scanf("%f",&e[i].bs);
e[i].da= (80*e[i].bs)/100;
e[i].hra=(20*e[i].bs)/100;
e[i].ts=e[i].bs+e[i].da+e[i].hra;
printf("---------------------------------------------------------------------");
}
printf("\nEmployee details : \n");
printf("\tSR.no\t NAME\tMobile no.\t   ID\t DESIGNATION\t BASIC SALARY \n");
for(i=0;i<n;i++)
{

printf("\t%d\t%s\t%s\t%s\t%s\t%0.2f\n",i+1,e[i].nm,e[i].mb,e[i].id,e[i].des,e[i].bs);
}
printf("\nSalary details : \n");
printf("\tSR.no \t NAME \t BASIC S  DA \t HRA\tTotal Salary \n");
for(i=0;i<n;i++)
{

printf("\t%d\t%s\t%0.2f %0.2f %0.2f\t%0.2f\n",i+1,e[i].nm,e[i].bs,e[i].da,e[i].hra,e[i].ts);
}
}
