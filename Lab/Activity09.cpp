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
    cout<<"Activity No.9";line(1);
    cout<<"\t Write a program that take previous and current month reading from user and calculate the"<<endl
	<<"consumed units in a month. If the consumed units are less and equal to 300, then calculate the \"electricity bill\" "<<endl
	<<"by taking Rs. 13/- per unit rate. On the other hand, if the consumed units are more than 300, then calculate "<<endl
	<<"the \"electricity bill\" by taking Rs.18/- per unit rate as well as 5% surcharge in the bill using IF-Statement."<<endl;
	line(2);cout<<"Solution:";line(3);
	long double current_reading,previous_reading,surcharge,total_reading,per_unit;
	spaces(25);cout<<"Please Enter Current Reading ";cin>> current_reading;
	spaces(25);cout<<"Please Enter Previous Reading ";cin>> previous_reading;
	total_reading=current_reading-previous_reading;
	line(1);spaces(15);cout<<"Current Reading: ";spaces(40);cout<<current_reading;
	line(1);spaces(15);cout<<"Previous Reading:";spaces(40);cout<<previous_reading;
	line(1);spaces(15);cout<<"Total Units: ";spaces(40);cout<<current_reading<<"-"<<previous_reading<<"="<<current_reading-previous_reading<<endl;
	if(total_reading<=300){
		total_reading=total_reading*13;
		per_unit=13;
		spaces(15);cout<<"Rs. Per Unit: ";spaces(43);cout<<per_unit;line(1);
		
	}
	else{
		total_reading=total_reading*18;
		surcharge=0.05*total_reading;
		per_unit=18;
		spaces(15);cout<<"Rs. Per Unit: ";spaces(43);cout<<per_unit;line(1);
		total_reading=surcharge+total_reading;
		spaces(15);cout<<"Surcharge: ";spaces(43);cout<<surcharge;line(1);
	}
	int i;
	line(1);spaces(7);separator(75);
		line(2);spaces(15);cout<<"Total Bill:  ";spaces(40);cout<<total_reading;
	 
	line(2);spaces(7);separator(75);
	
 	line(4);spaces(30);cout<<"Want to Rerun(y/n): ";cin>>rerun;
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

