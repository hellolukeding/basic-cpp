#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n,h,BMI;
	cin>>n>>h;
	BMI=n/(h*h);
	if(BMI<18.5){
		cout<<"Underweight";
	}
	if(BMI>=18.5&&BMI<24){
		cout<<"Normal";
	}
		if(BMI>=24){
		cout<<BMI<<endl;
		cout<<"Overweight";
		
	}
	return 0;
	
}
