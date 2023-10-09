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
    cout<<"Activity No.3";line(1);
    spaces(7);cout<<"Write a program that take two numbers from user and display the sum, difference, multiplication, \n division and remainder of the numbers on computer screen.";line(1);
	spaces(15);cout<<"Solution:";line(2);
	int num1,num2,sum,diff,multi,division,remainder;
	spaces(25);cout<<"Please Enter First Number: ";cin>>num1;
	spaces(25);cout<<"Please Enter Second Number: ";cin>>num2;
	sum=num1+num2;
	diff=num1-num2;
	multi=num1*num2;
	division=num1/num2;
	remainder=num1%num2;
	line(1);cout<<"=>Arithmetic Operations on these numbers are  "<<endl;
	line(1);cout<<"\t"<<num1<<"+"<<num2<<"="<<sum<<endl<<"\t"<<num1<<"-"<<num2<<"="<<diff<<endl<<"\t"<<num1<<"*"<<num2<<"="<<multi<<endl<<"\t"
	<<num1<<"/"<<num2<<"="<<division<<endl<<"\t"<<num1<<"%"<<num2<<"="<<remainder<<endl;	
	
	
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
