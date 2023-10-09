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
    cout<<"Activity No.18";line(1);
    cout<<"\t Write a program that take a character from user and display whether it is vowel or not on the screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	char vowel;
	cout<<"\t\t\tEnter Any Alphabet"<<endl;
	cin>>vowel;
	switch(vowel){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'i':
		case 'I':
		case 'O':
		case 'o':
		case 'u':
		case 'U':
			cout<<"It's Vowel";
			break;
		default:
			cout<<"It's Not Vowel";
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
