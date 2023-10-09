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
    cout<<"Activity No.11";line(1);
    cout<<"\t Write a program to input a number from the user. Use if-else statement to find out whether the"
	<<"\nnumber is less than or greater than 100."<<endl;
	line(2);cout<<"Solution:";line(3);
	long double num;
	spaces(6);cout<<"Enter The Number "<<endl;
	cin>>num;
	if(num>100){
		line(1);spaces(9);cout<<num<<" is Greater than 100";
	}
	else{
		line(1);spaces(9);cout<<num<<" is Less than 100";
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
