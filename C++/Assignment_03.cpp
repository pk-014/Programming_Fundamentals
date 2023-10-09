#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	int marks;
	system("Color 0A");
	cout<<"Enter Your Marks "<<endl;
	cin>>marks;
	if(marks>=60)
{
	cout<<"Student Promoted "<<endl;
	}	
	else{
		cout<<"Student Failed";
	}
}

