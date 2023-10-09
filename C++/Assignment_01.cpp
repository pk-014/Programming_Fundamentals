#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 0A");
	double qnt,rate,dis;
	cout<<"Enter Quantity"<<endl;
	cin>>qnt;
	cout<<"Enter Rate of Per Piece"<<endl;
	cin>>rate;
	dis=0;
	int exp=(qnt*rate)-(qnt*rate)*dis;
	if(qnt>1000){
		dis=0.1;
		exp=(qnt*rate)-(qnt*rate)*dis;
		cout<<"You Got Discount of 10%"<<endl;
		
	}
	cout<<"Your Total is "<<exp;

}


