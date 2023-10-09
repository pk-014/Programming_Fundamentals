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
    cout<<"Activity No.13";line(1);
    cout<<"\t Write a program that take input marks obtained by a student in a subject. The marks of each subject is 100."
	<<"\nFind out grade of the student by using IF-Else statement."
	<<endl<<"\tgrade >= 85 		Grade A+" 
	<<endl<<"\tgrade >= 80 		Grade A "
	<<endl<<"\tgrade >=75 		Grade B+"
	<<endl<<"\tgrade >=70 		Grade B"
	<<endl<<"\tgrade >=65 		Grade C+"
	<<endl<<"\tgrade >=60  		Grade C"
	<<endl<<"\tgrade >=55  		Grade D+"
	<<endl<<"\tgrade >=50  		Grade D"
	<<endl<<"\tgrade <  50  		Grade F"<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double grade;
	cout<<"\t\t\tEnter Marks(Out Of 100) "<<endl;
	cin>>grade;
	if(grade>100 || grade<0){
		cout<<"\n\t\t\tInvalid Marks!!!";
	}
	else if(grade>=85){
		cout<<"\n\t\t\tYou Got A+ Grade";
	}
	else if(grade>=80){
		cout<<"\n\t\t\tYou Got A Grade";
	}
	else if(grade>=75){
		cout<<"\n\t\t\tYou Got B+ Grade";
	}
	else if(grade>=70){
		cout<<"\n\t\t\tYou Got B Grade";
	}
	else if(grade>=65){
		cout<<"\n\t\t\tYou Got C+ Grade";
	}
	else if(grade>=60){
		cout<<"\n\t\t\tYou Got C Grade";
	}
	else if(grade>=55){
		cout<<"\n\t\t\tYou Got D+ Grade";
	}
	else if(grade>=50){
		cout<<"\n\t\t\tYou Got D Grade";
	}
	else if(grade<50){
		cout<<"\n\t\t\tYou Got F Grade";
	}
	else{
		cout<<"ERROR";
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
