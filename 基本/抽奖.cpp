#include<iostream>
#include<ctime> 
#include<cstdlib>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a){
		cout<<"中奖了";
	}
	else{
		cout<<"没中奖"; 
	}
	cout<<a;
	return 0;
}
