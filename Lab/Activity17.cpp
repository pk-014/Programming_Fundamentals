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
    cout<<"Activity No.17";line(1);
    cout<<"\t Write a program that take three numbers from user and display the numbers are equal or not using"<<"\nNESTED-IF statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double num1,num2,num3;
	cout<<"\t\t\tEnter The First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tEnter The Second Number "<<endl;
	cin>>num2;
	cout<<"\t\t\tEnter The Third Number "<<endl;
	cin>>num3;
	if(num1==num2){
		if(num1==num3 && num3==num2)
		cout<<"All Equal";
		else{
			cout<<"Only First Number ("<<num1<<") and Second Number ("<<num2<<") are Equal.";
		}
	}
	
	else if(num2==num3){
		if(num2==num1 && num1==num3){
			cout<<"All Equal";
		}
		else{
			cout<<"Only Second Number ("<<num2<<") and Third Number ("<<num3<<") are Equal.";
		}
	}
	
	else if(num1==num3){
			if(num1==num2 && num2==num3){
				cout<<"All Equal";
			}
			else{
				cout<<"Only First Number ("<<num1<<") and Third Number ("<<num3<<") are Equal.";

			}
	}
	else{
		cout<<"All Are Different";
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
