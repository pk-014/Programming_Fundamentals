#include<iostream>
using namespace std;
void tableOf(int);
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
cout<<"Table Writing Function\n";
cout<<"Enter the Integer: ";cin>>num;
cout<<"\n Table of "<<num<<endl;
tableOf(num);
cout<<"\n\nWant to Run Program again?=>(y/n) ";
cin>>rerun;
system("CLS");
}while (rerun!='n');
 return 0;
}
void tableOf(int num){
    for(int i=1;i<=10;i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}
