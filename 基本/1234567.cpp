#include<iostream>
using namespace std;
int main()
{
	double p;
	int q,a,d,c,b;
	cin>>p;
	q=int(p*10);//强制转换 
	a=q/1000;//千位 
	b=q/100%10;//百位 
	c=q/10%10;//十位
	d=q%10;//个位
	cout<<d<<'.'<<c<<b<<a<<endl;
	 return 0;
}
