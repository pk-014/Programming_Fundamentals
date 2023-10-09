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
    cout<<"Activity No.28";line(1);
    cout<<"\t Write a program that take 7 temperature float values in first array, copy these values in a \n second array and then display the values in second array on computer screen.";
    line(2);cout<<"Solution:";line(3);
    float temp1[7],temp2[7];
    spaces(3);cout<<"Array 1";line(1);
    for (int i = 0; i < 7; i++)
    {
        cout<<"Enter the value of Temperature day "<<i<<": ";cin>>temp1[i];
    }
    for (int i = 0; i < 7; i++)
    {
        temp2[i]=temp1[i];
    }
    cout<<"Values of Temperature stored in Array 2 are: ";
    for (int i = 0; i < 7; i++)
    {
        cout<<" "<<temp2[i];
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

