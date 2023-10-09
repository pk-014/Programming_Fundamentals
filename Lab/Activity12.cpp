#include <iostream>
#include<conio.h>
using namespace std;
void spaces(int);
void line(int);
void separator(int);
int main(){
	char rerun;
	do
	{
	system("Color 70");
	line(1);spaces(7);cout<<"=>Programming Fundamentals";line(1);
	spaces(7);cout<<"=>Presented By: Muhammad Asad";line(1);
    cout<<"Activity No.12";line(1);
    cout<<"\t Write a program to calculate the net pay of an employee. Input the basic pay and calculate the net pay \nas follows using IF-Else Statement:"<<endl
	<<"(1) House rent is 45% of the basic pay."<<endl
	<<"(2) Medical allowance is 2% of basic if basic is greater than Rs. 5000/-. It is 5% of basic pay if the pay is\nless than Rs. 5000/-."<<endl
	<<"(3) Conveyance allowance is Rs. 96/- if basic pay is less than Rs. 5000/-. It is Rs. 193/- if the basic pay is\nmore than Rs. 5000/-."<<endl
	<<"=> Net pay is calculated by adding basic pay, medical allowance, conveyance allowance and house rent."<<endl;
	line(2);cout<<"Solution:";line(3);
	float basic_pay,net_pay,house_rent,medical_allowance,conveyance_allowance;
	spaces(6);cout<<"Please Enter Your Basic Pay "<<endl;
	cin>>basic_pay;
	house_rent=0.45*basic_pay;
	if(basic_pay>5000){
		medical_allowance=0.02*basic_pay;
		conveyance_allowance=193;
	}
	else{
		medical_allowance=0.05*basic_pay;
		conveyance_allowance=96;
	}
	net_pay=basic_pay+house_rent+medical_allowance+conveyance_allowance;
	cout<<endl<<"\t\t\tIf your Basic Pay is "<<basic_pay<<endl<<"\t\t\t(1)House Rent is "<<house_rent<<endl
	<<"\t\t\t(2)Medical Allowance is "<<medical_allowance<<endl
	<<"\t\t\t(3)Coveyance Allowance is "<<conveyance_allowance<<endl<<endl;
	cout<<"\t\t\t=>Then Your Net Pay Is "<<net_pay<<endl;
	line(2);spaces(15);separator(65);
  	line(2);spaces(30);cout<<"Want to Rerun(y/n): ";cin>>rerun;
	system("CLS");	} while (rerun!='n');
 return 0;
 }
void spaces(int a){
	for (int i = 0; i < a; i++)
	{
		cout<<" ";
	}
	
}
void line(int a){
	for (int i = 0; i < a; i++)
	{
		cout<<endl;
	}
	
}
void separator(int a){
	for (int i = 0; i < a; i++)
	{
		cout<<"=";
	}
	
}
