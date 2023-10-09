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
    cout<<"Activity No.19";line(1);
    cout<<"\t Write a program that take two numbers and an operator from user and display the sum, difference,"
	<<"\nmultiplication, division and remainder using switch statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num1,num2;
	char operators;
	cout<<"\t\t\tEnter The First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tEnter The Second Number "<<endl;
	cin>>num2;
	cout<<"\t\t\tEnter The Arithematic Operator "<<endl;
	cin>>operators;
	switch(operators){
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
			cout<<num1*num2;
			break;
		case '/':
			cout<<num1/num2;
			break;
		case '%':
			cout<<num1%num2;
			break;
	}
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
