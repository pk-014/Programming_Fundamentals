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
    cout<<"Activity No.27";line(1);
    cout<<"\t Write a program that take 7 temperature float values in an array and display these values on computer screen.";
    line(2);cout<<"Solution:";line(3);
    float temp[7];
    for (int i = 1; i < 8; i++)
    {
        cout<<"Enter the value of Temperature of day "<<i<<": ";cin>>temp[i];
    }
    line(2);cout<<"The entered temperature values are: ";
    for (int i = 0; i < 7; i++)
    {
        cout<<" "<<temp[i];
    }
    line(3);spaces(15);separator(65);
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

