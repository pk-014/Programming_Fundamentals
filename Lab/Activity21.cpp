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
    cout<<"Activity No.21";line(1);
    cout<<"\t Write a program to display the odd numbers from 1 to 10 natural numbers and also display"<<"\nthe sum of these numbers using FOR loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i,sum=0;
	cout<<"Odd Numbers:  ";
	for(i=1;i<=10;i++){
		if(i%2!=0){
			cout<<i;
			sum=sum+i;
			continue;
		}
	}
	cout<<"\nThe Sum is:   "<<sum;
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
