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
    cout<<"Activity No.2";line(1);
    spaces(7);cout<<"Write a program that take the radius of a circle from user and calculate the area and circumference \n of circle and display the results on screen.";line(1);
	spaces(15);cout<<"Solution:";line(2);
	long double radius,pi,area,circum;
	radius=0;
	pi=3.14159265;
	spaces(25);cout<<"Please Enter Radius: ";cin>>radius;
	circum=2*pi*radius;
	area=pi*radius*radius;
	spaces(25);cout<<"=>The Circumference is "<<circum;line(1);
	spaces(25);cout<<"=>The Area is "<<area;	
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
