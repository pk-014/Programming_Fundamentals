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
    cout<<"Activity No.30";line(1);
    cout<<"\t Write a program that takes two one-dimensional arrays from user and display the arrays as \nwell as sum of these arrays on the screen. ";
    line(2);cout<<"Solution:";line(3);
	spaces(3);cout<<"Enter value for 1st Array (max 5)";line(2);
	int arr1[5],arr2[5];
	for (int i = 0; i < 5; i++)
	{
		cout<<"Enter "<<i<<" value of 1st Array: ";cin>>arr1[i];
	}
	spaces(3);cout<<"Enter value for 2nd Array (max 5)";line(2);
	for (int i = 0; i < 5; i++)
	{
		cout<<"Enter "<<i<<" value of 2nd Array: ";cin>>arr2[i];
	}
    line(1);spaces(3);cout<<"The sum of these two arrays is: ";
	for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]+arr2[i]<<" ";
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

