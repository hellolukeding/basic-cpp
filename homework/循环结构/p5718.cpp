#include<iostream>
using namespace std;
int main()
{
	int n;
	int MIN=0x7fffffff;
	int num;
	cin>>n;
	for(int i=1 ;i<=n;i++)
	{
	cin>>num;	
	if(MIN>num)
	{
		MIN=num;
		}	
	}
	cout<<MIN;
	return 0;
}
