#include<iostream>
#include<iomanip>
using namespace std;
class product{
	string product_id;
	string product_name;
	string stock;
	float gst;
	float discount;
	int product_price;
	public:
		void setproduct();
		void getproduct();
};
void product:: setproduct(){
	
	cout<<"enter product id ="<<endl;
	cin>>product_id;
	cout<<"enter product name ="<<endl;
	cin>>product_name;
	cout<<"enter stock ="<<endl;
	cin>>stock;
	cout<<"enter product price ="<<endl;
	cin>>product_price;
}
void product :: getproduct()
{
	cout<<"product_id \t product_name \t stock \t product_price" <<endl;
	cout<<product_id<<setw(20)<<product_name<<setw(15)<<stock<<setw(10)<<product_price<<endl;
}
int main()
{
	product p;
	p.setproduct();
	p.getproduct();
	return 0;
	
}
