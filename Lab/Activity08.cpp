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
    cout<<"Activity No.8";line(1);
    spaces(7);cout<<"Write a program that take two numbers from user and display the greater number using IF-Statement."<<endl;
	line(2);cout<<"Solution:";line(3);
	int num1,num2;
	spaces(25);cout<<"Please Enter First Number: ";cin>>num1;
	spaces(25);cout<<"Please Enter Second Number: ";cin>>num2;
	if(num1>num2){
		line(1);spaces(25);cout<<"=>"<<num1<<" is greater than "<<num2;
	}
	else if(num2>num1){
		line(1);spaces(25);cout<<"=>"<<num2<<" is greater than "<<num1;
	}
	else if (num1==num2)
	{
		line(1);spaces(25);cout<<"=>"<<num2<<" is Equal to "<<num1;
	}
	else{
		line(1);spaces(25);cout<<"ERROR";
	}
 	line(2);spaces(10);separator(80);line(2);spaces(30);cout<<"Want to Rerun(y/n): ";cin>>rerun;
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

