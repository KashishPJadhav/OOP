#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
char name[30];
char id[10];
char desg[20];
char mobnumber[15];
float basicsalary;
float da;
float hra;
float totalsalary;
int i,n; //n=no. of employees//
i=0;
cout<<"\nEnter Name : ";
cin>>name;
cout<<"\nEnter Employee ID : ";
cin>>id;
cout<<"\nEnter Mobile no. : ";
cin>>mobnumber;
cout<<"\nEnter Designation : ";
cin>>desg;
cout<<"\nEnter Basic Salary : ";
cin>>basicsalary;
//took data from user using cin//
da= (80*basicsalary)/100; //calculate DA//
hra=(20*basicsalary)/100; //calculated HRA//
totalsalary=basicsalary+da+hra; //calculate Total Salary//
cout<<"---------------------------------------------------------------------"<<endl;

cout<<"\nEmployee details : \n"<<endl;
cout<<"SR.no"<<setw(5)<<"NAME"<<setw(15)<<"Mobile no."<<setw(5)<<"ID"<<setw(15)<<"DESIGNATION"<<setw(15)<<"BASIC-SALARY \n"<<endl;
cout<<i+1<<setw(8)<<name<<setw(15)<<mobnumber<<setw(10)<<id<<setw(15)<<desg<<setw(10)<<basicsalary<<endl;

cout<<"\nSalary details : \n"<<endl;
cout<<"SR.no"<<setw(10)<<"NAME"<<setw(10)<<"BASIC S"<<setw(8)<<"DA"<<setw(8)<<"HRA"<<setw(20)<<"Total Salary \n"<<endl;
cout<<i+1<<setw(15)<<name<<setw(10)<<basicsalary<<setw(10)<<da<<setw(10)<<hra<<setw(10)<<totalsalary<<endl;
//printed the data//
}
