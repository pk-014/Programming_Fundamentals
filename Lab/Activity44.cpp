#include<iostream>
using namespace std;
long double sum(long double,long double);
long double sub(long double,long double);
long double div(long double,long double);
long double mul(long double,long double);
int main()
{
char rerun;
do
{
system("Color 70");
cout<<"=>Programming Fundamentals"<<endl;
cout<<"=>Presented By: Muhammad Asad"<<endl;
cout<<endl;
long double num1,num2;
char op;
cout<<"Simple Calculator_(Two Parameteric)";
cout<<"\n Enter First Number: ";cin>>num1;
cout<<"\n Enter Second Number: ";cin>>num2;
cout<<"\n Enter The Operation: ";cin>>op;
switch(op){
    case '+':
    cout<<num1<<"+"<<num2<<"= ";
    cout<<sum(num1,num2);
    break;
    case '-':
    cout<<num1<<"-"<<num2<<"= ";
    cout<<sub(num1,num2);
    break;
    case '/':
    cout<<num1<<"/"<<num2<<"= ";
    cout<<div(num1,num2);
    break;
    case '*':
    cout<<num1<<"*"<<num2<<"= ";
    cout<<mul(num1,num2);
    break;
    default:
    cout<<"Enter A Valid Operation.";
}

cout<<"\n\nWant to Run Program again?=>(y/n) ";
cin>>rerun;
system("CLS");
}while (rerun!='n');
 return 0;
}
long double sum(long double num1,long double num2){
    int num3=num1+num2;
    return(num3);
}
long double sub(long double num1,long double num2){
    int num3=num1-num2;
    return(num3);
}
long double div(long double num1,long double num2){
    int num3=num1/num2;
    return(num3);
}
long double mul(long double num1,long double num2){
    int num3=num1*num2;
    return(num3);
}
