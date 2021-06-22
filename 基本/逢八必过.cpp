#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i=1;i<=1000;i++)
	{
		if(i%8==0||i%10==8||(i/10)%10==8||i/100==8)
	{
	    	cout<<"¹ý"<<endl;
	    	continue;
	}
	cout<<i<<endl;
	}
	return 0;
 } 
