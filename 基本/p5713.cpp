#include<iostream>
using namespace std;
int main ()
{
	int n,r,t;
	cin>>n;
	r=n*5;
	t=n*3+11;
	if(r<t)
	{
		cout<<"Local"; 
		return 0;
	}
	cout<<"Luogu";
	return 0;
}
