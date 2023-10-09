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
    cout<<"Activity No.4";line(1);
    spaces(7);cout<<"Write a program that take a 4-digit number from user and display the number in reverse \n order on computer screen."<<endl;
	line(2);cout<<"Solution:";line(3);
	int num1,rev;
	spaces(25);cout<<"Please Enter a 4-Digit Number: ";cin>>num1;
	spaces(25);cout<<"In Resverse Order  ";line(1);spaces(35);
	for(num1;num1!=0;num1=num1/10){
		rev=num1%10;
		cout<<rev;
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
