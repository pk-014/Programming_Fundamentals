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
    cout<<"Activity No.29";line(1);
    cout<<"\t Write a program that take the characters of the name of student in first array, copy these \n characters in second array and display the name of the student from second array.";
    line(2);cout<<"Solution:";line(3);
	spaces(3);cout<<"Enter 5 Character lenghty Name";line(2);
	char name_chars[5],name[5];
	for (int i = 0; i < 5; i++)
	{
		cout<<"Enter "<<i<<" Character of the name: ";cin>>name_chars[i];
	}
	line(1);cout<<"Name your entered is: ";
	for (int i = 0; i < 5; i++)
	{
		name[i]=name_chars[i];
		cout<<name[i];
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

