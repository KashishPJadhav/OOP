#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class employee
{
public:
   char name[30];
   char id[10];
   char desg[20];
   char mobnumber[15];
   float basicsalary;
   float da;
   float hra;
   float totalsalary;
   void getd();
   void putd1();
   void putd2();
};
//created a class//
int main()
{
    employee e[10]; //created a object of class//
    int i,n; //n=no. of employees//
    cout<<"\nEnter No. of employees : ";
    cin>>n;
    cout<<"\nEnter details : \n";
    for(i=0;i<n;i++) //loop
   {
       e[i].getd();
  }
    cout<<"\nEmployee details : \n"<<endl;
    cout<<"SR.no"<<setw(5)<<"NAME"<<setw(15)<<"Mobile no."<<setw(5)<<"ID"<<setw      (15)<<"DESIGNATION"<<setw(15)<<"BASIC-SALARY \n"<<endl;
    for(i=0;i<n;i++)
     {
        e[i].putd1();
     }
     cout<<"\nSalary details : \n"<<endl;
     cout<<"SR.no"<<setw(10)<<"NAME"<<setw(10)<<"BASIC S"<<setw(8)<<"DA"<<setw (8)<<"HRA"<<setw(20)<<"Total Salary \n"<<endl;
    for(i=0;i<n;i++)
    {
    e[i].putd2();
     }
//printed the data//
}
void employee::getd(void)
{
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
}

void employee::putd1(void)
{
int i=0;
        cout<<i+1<<setw(8)<<name<<setw(15)<<mobnumber<<setw(10)<<id<<setw(15)<<desg<<setw(10)<<basicsalary<<endl;
}
void employee::putd2(void)
{
int i=0;
          cout<<i+1<<setw(15)<<name<<setw(10)<<basicsalary<<setw(10)<<da<<setw(10)<<hra<<setw(10)<<totalsalary<<endl;
}
