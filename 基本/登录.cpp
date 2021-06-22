#include<iostream>
using namespace std;
int main(){
	const int USER=201701,PSW=135709;
	int user,psw;
	cin>>user>>psw;
	if(user==USER)
	{
		if(psw==PSW)
		{
		cout<<"Ç×°®µÄÐ¡ÅóÓÑ»¶Ó­Äú";	
		}
		else{
			cout<<"ÃÜÂë´íÎó";
		}
	}
	else{
			cout<<"ÓÃ»§Ãû´íÎó"; 
		}
    return 0;	
}
