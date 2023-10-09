#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	int servedYears,currentYear,yearOfJoining,bonus;
	system("Color 0A");
	cout<<"Enter Current Year "<<endl;
	cin>>currentYear;
	cout<<"Enter Year Of Joinig "<<endl;
	cin>>yearOfJoining;
	bonus=0;
	servedYears=currentYear-yearOfJoining;
	if(servedYears>3)
{
	bonus=2500;
	cout<<"Thanks For Serving Us Here's Your Reward "<<bonus;
	}	
	else{
		cout<<"You Got Nothing";
	}
}

