#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double A=100;
double B=2001.5251;
double C=201455.2646;
//We can use setbase(16) here instead of hex
//formatting
//cout<<hex<<left<<showbase<<nouppercase;
//actual printed part
//cout<<(long long)A<<endl;
//We can use dec here instead of setbase(10)
//formatting
//cout<<setbase(10)<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2);
//actual printed part
//cout<<B<<endl;
//formatting
cout<<scientific<<uppercase<<noshowpos<<setprecision(9);
//actual printed part
cout<<C<<endl;


}
