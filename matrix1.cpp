#include<iostream>
#include"matrix.h"
using namespace std;
istream& operator >>(istream& in,matrix& m)
{
     cout<<"\nEnter Size : ";
     in>>m.size;
     cout<<"\nEnter Matrix : ";
     int i=0;
     int j=0;
     for(i=0;i<m.size;i++)
     {
           for(j=0;j<m.size;j++)
           {
                 in>>m.ma[i][j];
           }
     }
     return in;
}
ostream& operator <<(ostream& out,const matrix& m)
{
     int i=0;
     int j=0;
     
     for(i=0;i<m.size;i++)
     {
           for(j=0;j<m.size;j++)
           {
                 out<<m.ma[i][j]<<" ";
           }
           out<<endl;
     }
     return out;
}
int main()
{
matrix m1,m2,re1,re2,re3;
cin>>m1;
cout<<m1;
cin>>m2;
cout<<m2;
re1=m1+m2;
cout<<"Addition : \n";
cout<<re1;
re2=m1-m2;
cout<<"Substraction : \n";
cout<<re2;
re3=m1*m2;
cout<<"Multiplication : \n";
cout<<re3;
}
