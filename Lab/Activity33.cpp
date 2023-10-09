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
    cout<<"Activity No.33";line(1);
    cout<<"\t Write a program that takes two arrays of order 2x2 and display the sum, \ndifference and multiplication of these arrays. ";
    line(2);cout<<"Solution:";line(3);
	int arr[2][2],arr2[2][2];
    cout<<"Enter Elements of 1st Array : ";line(1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nEnter Elements of 2nd Array : ";line(1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"\n\nSum of these Arrays is :";line(1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<(arr[i][j])+(arr2[i][j])<<" ";
        }
        cout<<endl;  
    }
    cout<<"\n\nDiffence of these Arrays is :";line(1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<(arr[i][j])-(arr2[i][j])<<" ";
        }
        cout<<endl;  
    }
    int sum;
    cout<<"\n\nMultiplication of these Arrays is :";line(1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum=0;
            for (int k = 0; k < 2; k++)
            {
                sum=sum+arr[i][k]*arr2[k][j];
            }
             cout<<sum<<" ";
        }
        cout<<endl;  
    }
    line(4);spaces(15);separator(65);
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

