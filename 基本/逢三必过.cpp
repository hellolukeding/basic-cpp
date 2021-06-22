#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;1;i++)
	{
		if(i%3==0||i%10==3)
		{
		cout<<"¹ý"<<endl;
		continue;	
		}
		cout<<i<<endl;
	}
	return 0;
}
