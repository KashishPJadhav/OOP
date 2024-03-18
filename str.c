#include<stdio.h>
struct stu
{
char nm[30];
char prn[10];
char cls[10];
float grd;
char mb[15];
char adr[50];
char em[20];
};
int main()
{
struct stu s[10];
int i,n;
printf("\nEnter No. of student : ");
scanf("%d",&n);
printf("\nAcademic details : \n");
for(i=0;i<n;i++)
{
printf("\nEnter Name : ");
scanf("%s",&s[i].nm);
printf("\nEnter PRN : ");
scanf("%s",&s[i].prn);
printf("\nEnter Class : ");
scanf("%s",&s[i].cls);
printf("\nEnter Grade : ");
scanf("%f",&s[i].grd);
printf("\nPersonal details : ");
printf("\nEnter Mobile no. : ");
scanf("%s",&s[i].mb);
printf("\nEnter Address : ");
scanf("%s",&s[i].adr);
printf("\nEnter Email : ");
scanf("%s",&s[i].em);
printf("---------------------------------------------------------------------");
}
printf("\nAcademic details : \n");
printf("\tSR.no\t NAME\t PRN\t CLASS\t GRADE \n");
for(i=0;i<n;i++)
{

printf("\t%d\t%s\t%s\t%s\t%f\n",i+1,s[i].nm,s[i].prn,s[i].cls,s[i].grd);
}
printf("\npersonal details : \n");
printf("\tSR.no \t NAME \t Address \t Email\tMobile No.  \n");
for(i=0;i<n;i++)
{

printf("\t%d\t%s\t%s\t%s\t%s\n",i+1,s[i].nm,s[i].adr,s[i].em,s[i].mb);
}
}

