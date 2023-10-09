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
    cout<<"Activity No.23";line(1);
    cout<<"\t Write a program to print the multiplication table of a number entered from the user using While Loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i,num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	i=1;
	while(i<=10){
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	i++;
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
