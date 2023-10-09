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
    cout<<"Activity No.5";line(1);
    spaces(7);cout<<"Write a program that take the temperature in Fahrenheit from user and convert it in Centigrade \n temperature using formula (C=5/9(F-32)) and display the result on computer screen"<<endl;
	line(2);cout<<"Solution:";line(3);
	float tempf,tempc;
	spaces(25);cout<<"Please Enter Temperature in Fahrenheit: ";cin>>tempf;
	line(1);spaces(25);cout<<"=>Temperature in Centigrade is  ";
	tempf=tempf-32;
	tempc=0.5555555555555*tempf;
	cout<<tempc;
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
