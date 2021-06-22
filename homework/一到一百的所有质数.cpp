#include<iostream>
using namespace std;
int main()
{
	int i;
	int j;
	bool flag=1;
	
	for(i=2;i<=100;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
		if(i%j==0)
		{
		flag=0;	
		break;
			}
				
		}
	if(flag)
	{cout<<i<<endl;
		}
			
	}
	return 0;
}
