#include <iostream>
#include<conio.h>
#include<string>
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
    cout<<"Activity No.10";line(1);
    cout<<"\t Write a program that take the employee name and basic salary from user. If the basic salary is less"
	<<"\nthan or equal to 5000, then take house rent (30% of basic salary), contract allowance (45% of basic salary),"
	<<"\nconveyance allowance (45% of basic salary), medical allowance Rs.193/. On the other hand, if the basic salary is"
	<<"\nmore than 5000, then take all the parameters same except taking income tax (2% of basic salary), medical allowance"
	<<"\nRs. 96/- and calculate net salary by adding basic salary, house rent, contract allowance, conveyance allowance,"
	<<"\nmedical allowance and subtracting income tax using IF-Statement";line(1);
	line(2);cout<<"Solution:";line(3);
	long double basic_salary,conveyance_allowance,medical_allowance,income_tax,house_rent,contract_allowance,net_salary;
	string name;
	spaces(25);cout<<"Please Enter Your Name ";getline(cin>>ws,name);
	spaces(25);cout<<"Please Enter Your Basic Salary ";cin>>basic_salary;
	if(basic_salary<=5000){
		house_rent=0.3*basic_salary;
		contract_allowance=0.45*basic_salary;
		conveyance_allowance=0.45*basic_salary;
		medical_allowance=193;
		income_tax=0;
	}
	else{
		house_rent=0.3*basic_salary;
		contract_allowance=0.45*basic_salary;
		conveyance_allowance=0.45*basic_salary;
		medical_allowance=96;
		income_tax=0.02*basic_salary;
		
	}
	line(2);spaces(25);cout<<"Name: ";spaces(35);cout<<name;
	line(1);spaces(25);cout<<"Basic Salary: "; spaces(27); cout<<basic_salary;
	line(1);spaces(25);cout<<"Conveyance Allowance:";spaces(20);cout<<conveyance_allowance;
	line(1);spaces(25);cout<<"Medical Allowance:";spaces(23);cout<<medical_allowance;
	line(1);spaces(25);cout<<"House Rent:";spaces(30);cout<<house_rent;
	line(1);spaces(25);cout<<"Contract Allowance:";spaces(22);cout<<contract_allowance;
	line(1);spaces(25);cout<<"Income Tax:";spaces(30);cout<<income_tax;line(1);
	net_salary=(basic_salary+house_rent+contract_allowance+conveyance_allowance+medical_allowance)-income_tax;
	int i;
	line(1);spaces(15);separator(65);
	line(2);spaces(25);cout<<"Net Salary:";spaces(25);cout<<net_salary<<endl;
	line(1);spaces(15);separator(65);
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

