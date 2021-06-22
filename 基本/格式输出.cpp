#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
	int a,h;
	float s;
	cin>>a>>h;
	s=(float)a*h/2;
	cout<<s<<endl;
	cout<<"**"<<fixed<<setprecision(2)<<setw(10)<<s<<endl;
	printf("**%10.2f\n",s);
	return 0;  
	}
