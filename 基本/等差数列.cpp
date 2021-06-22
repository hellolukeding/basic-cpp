#include<iostream>
using namespace std;
int main()	
{
	int i=6,sum=0;
	while(i<=180)
	{
		sum=sum+i;
		i=i+6; 
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}
