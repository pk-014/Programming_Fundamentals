#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	int age;
	system("Color 0A");
	char marriageStatus,gender;
	cout<<"What Is Your Martial Satus? "<<endl<<"M :  For Married  N :  For Unmarried "<<endl<<endl;
	cin>>marriageStatus;
	if( (marriageStatus == 'm') || (marriageStatus == 'M') ){
		cout<<endl<<"Driver Is Insured"<<endl;	
	}
	if((marriageStatus=='n') || (marriageStatus=='N')){
		cout<<endl<<"What Is Your Gender? "<<endl<<"M :  For Male  F :  For Female "<<endl<<endl;
		cin>>gender;
		if((gender=='m') || (gender=='M')){
			cout<<endl<<"Enter Your Age "<<endl<<endl;
			cin>>age;
			if(age>30){
				cout<<endl<<"Driver Is Insured"<<endl;
			}
			else{
				cout<<endl<<"Driver Is Not Insured (Does'nt Meet Eligibility Criteria)"<<endl;
			}	
		}
		if((gender=='f') || (gender=='F')){
			cout<<endl<<"Enter Your Age "<<endl<<endl;
			cin>>age;
			if(age>25){
				cout<<endl<<"Driver Is Insured"<<endl;
			}
			else{
				cout<<endl<<"Driver Is Not Insured (Does'nt Meet Eligibility Criteria)"<<endl;
			}
		}
	}
}

