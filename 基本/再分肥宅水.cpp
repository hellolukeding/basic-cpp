#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float ml,t;
	int n,l;
	cin>>ml;
	cin>>n;
	t=ml/n;
	l=n*2;
	cout<<fixed<<setprecision(3)<<t<<endl<<l;
	return 0;
 } 
