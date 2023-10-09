#include<iostream>
using namespace std;
void evenOdd(int);
int main()
{
char rerun;
do
{
system("Color 70");
cout<<"=>Programming Fundamentals"<<endl;
cout<<"=>Presented By: Muhammad Asad"<<endl;
cout<<endl;
int num;
cout<<"Enter Number: ";cin>>num;
evenOdd(num);
cout<<"\n\nWant to Run Program again?=>(y/n) ";
cin>>rerun;
system("CLS");
}while (rerun!='n');
 return 0;
}
void evenOdd(int num){
    if(num%2==0){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}
