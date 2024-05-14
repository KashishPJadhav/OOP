#include<iostream>
#include<cmath>
#include<limits>
using namespace std;
class Line 
{
	private :
		int x1,y1,x2,y2;
		float slope,intercept;
	public :
		Line();
		Line(int,int,int,int);
	    void calSlopeInter();
	    void setp(int,int,int,int);
	    float  getslope();
	    float getinter();
	    friend class Circle;
		
};
Line::Line()
{}
Line::Line(int xa,int xb,int ya,int yb)
{ 
    calSlopeInter();
}
void Line::setp(int xa,int xb,int ya,int yb)
{
	x1=xa;
	x2=xb;
	y1=ya;
	y2=yb;
}
void Line::calSlopeInter()
{
	if(x2-x1!=0)
	{
	   slope=(float)(y2-y1)/(x2-x1);
	   intercept=y1-slope*x1;
	}
	else
	{
		slope=numeric_limits<float>::infinity();
		intercept=0;
	}
}
float Line::getslope()
{
	return slope;
}
float Line::getinter()
{
	return intercept;
}
class Circle
{
	int Cx,Cy,r;
	public :
		Circle();
		Circle(int,int);
		Circle(int,int,int);
		bool isTangent(Line&);
};
Circle::Circle()
{
	Cx=0;Cy=0;r=1;
}
Circle::Circle(int cx,int cy)
{
	Cx=cx;Cy=cy;r=1;
}
Circle::Circle(int cx,int cy,int R)
{
	Cx=cx;Cy=cy;r=R;
}
bool Circle::isTangent(Line& l1)
{
	float dis=((l1.y2-l1.y1)*Cx-(l1.x2-l1.x1)*Cy+l1.x2*l1.y1-l1.y2*l1.x1)/sqrt(pow(l1.y2-l1.y1,2)+pow(l1.x2-l1.x1,2));
	return dis==r;
}
int main()
{
	int a,b,c,l1x,l1y,l2x,l2y;
	cout<<"\nEnter X cordinate : ";
	cin>>a;
	cout<<"\nEnter Y cordinate : ";
	cin>>b;
	cout<<"\nEnter Radius : ";
	cin>>c;
	cout<<"\Enter X1,Y1 and X2,Y2 of line : ";
	cin>>l1x>>l1y>>l2x>>l2y;
	Circle C(a,b,c);
	Line l(l1x,l2x,l1y,l2y);
	if(C.isTangent(l))
	{
		cout<<"\Line is Tangent.";
	}
	else
	{
		cout<<"\Line is not Tangent.";
	}
}
