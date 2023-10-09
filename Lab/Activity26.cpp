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
    cout<<"Activity No.26";line(1);
    cout<<"\tWrite a program to display the sum of the series given below using While Loop."<<endl<<
	"\n\t\t\t1+1/2+1/3+1/4+-----------------------+1/45\n  ";
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	double i=1,j,sum;
	while(i<=45){
		j=1/i;
		cout<<j<<endl;
		sum=sum+j;
	i++;
	}
	cout<<endl<<sum;
	
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
