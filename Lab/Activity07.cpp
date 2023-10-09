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
    cout<<"Activity No.7";line(1);
    spaces(7);cout<<"Write a program that take the student name, discipline, year of admission and registration \n from user and display on the computer screen."<<endl;
	line(2);cout<<"Solution:";line(3);
	string name,dis,yoa,reg;
	spaces(25);cout<<"Please Enter Your Name: "; getline(cin, name);
	spaces(25);cout<<"Please Enter Your Discipline: ";getline(cin, dis);
	spaces(25);cout<<"Please Enter Your Year Of Admission: ";getline(cin, yoa);
	spaces(25);cout<<"Please Enter Your Registration No.: ";getline(cin, reg);
	line(2);spaces(15);cout<<" => Name: ";cout<<name;line(1);
	spaces(15);cout<<" => Discipline: ";cout<<dis;line(1);
	spaces(15);cout<<" => Year Of Admission: ";cout<<yoa;line(1);
	spaces(15);cout<<" => Registration No.: ";cout<<reg;line(1);
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
