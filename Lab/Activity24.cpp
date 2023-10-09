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
    cout<<"Activity No.24";line(1);
    cout<<"\t Write a program to find the factorial of any number and display the result on screen using While Loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double i,num,factorial=1;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	while(num>0){
		cout<<num<<"*";
		factorial=factorial*num;
	num--;
	}
	cout<<"\nFactorial:    "<<factorial;
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
