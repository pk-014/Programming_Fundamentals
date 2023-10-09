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
	line(1);spaces(5);cout<<"=>Programming Fundamentals"<<endl;
	spaces(5);cout<<"=>Presented By: Muhammad Asad"<<endl;
    cout<<"Activity No.1";line(1);
    spaces(8);cout<<"Write a program to display a message on computer screen \"Welcome to University of Education, Township Campus, \n College Road, Lahore\"."; line(1);
	line(2);cout<<"Solution:";line(1);
	line(1);spaces(10);cout<<"Welcome to University of Education, Township Campus, College Road, Lahore";
	line(2);spaces(10);separator(80);line(2);spaces(30);cout<<"Want to Rerun(y/n): ";cin>>rerun;
	system("CLS");
	} while (rerun!='n');
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
