#include<iostream>
using namespace std;
class matrix
{
public :
int ma[10][10];
    int size;
    public :
     friend istream& operator >>(istream& in,matrix& m);
     friend ostream& operator <<(ostream& out,const matrix& m);
     matrix operator +(matrix m1);
     matrix operator -(matrix m1);
      matrix operator *(matrix m1);
};
