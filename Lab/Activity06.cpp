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
    cout<<"Activity No.6";line(1);
    spaces(7);cout<<"Write a program that take the roll number of the student and amount in dollar from user \n and display the roll number of the student, amount in dollar and amount in rupees on computer screen."<<endl;
	line(2);cout<<"Solution:";line(3);
	int rollno,money;
	spaces(25);cout<<"Please Enter Your Roll No. ";cin>>rollno;
	spaces(25);cout<<"Please Enter Your Money (In Dollars): ";cin>>money;
	line(2);spaces(25);
	money=260*money;
	cout<<"Roll No.";
	spaces(25);cout<<"Money(In Rupees)";line(1);
	spaces(25);cout<<rollno;
	spaces(35);cout<<money;line(2);
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
