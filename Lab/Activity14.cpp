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
    cout<<"Activity No.14";line(1);
    cout<<"\t Write a program that take a number from user and display the number is divisible by 3 or not using"
	<<"\nIF-ELSE statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	if(num%3==0){
		cout<<"\n\t\t\t"<<num<<" Is Divisible By 3";
	}
	else{
		cout<<"\n\t\t\t"<<num<<" Is Not Divisible By 3";
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
