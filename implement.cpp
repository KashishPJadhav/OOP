#include<iostream>
#include"matrix.h"
using namespace std;

matrix matrix :: operator +(matrix m1)
{
     matrix mat;
    mat.size=size;
    int i=0;
    int j=0;
     for(i=0;i<mat.size;i++)
     {
         for(j=0;j<mat.size;j++)
         {
             mat.ma[i][j]=ma[i][j]+m1.ma[i][j];
         }
     }
     return mat;
}
matrix matrix :: operator -(matrix m1)
{
     matrix mat;
    mat.size=size;
    int i=0;
    int j=0;
     for(i=0;i<mat.size;i++)
     {
         for(j=0;j<mat.size;j++)
         {
             mat.ma[i][j]=ma[i][j]-m1.ma[i][j];
         }
     }
     return mat;
}
matrix matrix :: operator *(matrix m1)
{
     matrix mat;
    mat.size=size;
    int i=0;
    int j=0;
    int k=0;
     for(i=0;i<mat.size;i++)
     {
         for(j=0;j<mat.size;j++)
         {
             mat.ma[i][j]=0;
             for(k=0;k<mat.size;k++)
             {
                 mat.ma[i][j]+=ma[i][k]*(m1.ma[k][j]);
             }
         }
     }
     return mat;
}
