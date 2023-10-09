#include<iostream>
using namespace std;
void fact();
void prime();
void even_odd();
int main()
{
char rerun;
do{
	int num;
 system("Color 70");
 cout<<"\n\t\t=>Programming Fundamentals"<<endl;
cout<<endl;
cout<<"=> Mini Tools"<<endl;
cout<<"\n1. Factorial of a number"<<"\t 2. Find if number is Prime or not"<<"\t 3. Find if the number is Even or Odd.\n"<<endl;
cout<<"What task you want to perform? ";cin>>num;
switch(num){
	case 1:
		cout<<"\n\t\t\t Factorial of a number\n\n";
		fact();
		break;
	case 2:
		cout<<"\n\t\t\t Prime Number\n\n";
		prime();
		break;
	case 3:
		cout<<"\n\t\t\t Even/Odd Number\n\n";
		even_odd();
		break;
	default:
		cout<<"Enter a valid key.";
}
cout<<endl<<"\n\n\n=>Run the Program again?(y/n)";
cin>>rerun;
 system("CLS");
}while (rerun!='n');
 return 0;
}
void fact(){
	long double fact_num;
	long double j=1;
	cout<<"Enter Number: ";cin>>fact_num;
	for(int i =fact_num;i>=1;i--){
		j=j*i;
	}
	cout<<"\t\t";
	for(int l=70;l>1;l--){
		cout<<"_";
	}
	cout<<"\n\n\t\t\t\t The Factorial of entered number is: "<<j;
	cout<<"\n\t\t";
	for(int l=70;l>1;l--){
		cout<<"_";
	}
}
void prime(){
	int p_num,count=0;
	cout<<"Enter Number: ";cin>>p_num;
	for(int i=p_num;i>=1;i--){
		int root =p_num%i;
		if(root==0){
			count++;
		}		
	}
	cout<<"\t\t";
	for(int l=70;l>1;l--){
		cout<<"_";
	}
	if(count==2){
		cout<<"\n\n\t\t\t\tThe Entered Number is a Prime Number.";
	}
	else{
		cout<<"\n\n\t\t\t\tThe Entered Number is not a Prime Number.";
	}
	cout<<"\n\t\t";
	for(int l=70;l>1;l--){
		cout<<"_";
	}
}
void even_odd(){
	int num;
	cout<<"Enter Number: ";cin>>num;
	cout<<"\t\t";
	for(int l=70;l>1;l--){
		cout<<"_";
	}
	if(num%2==0){
		
		cout<<"\n\n\t\t\t\tYour Entered Number is EVEN.";
	}
	else{
		cout<<"\n\n\t\t\t\tYour Entered Number is ODD.";
	}
	cout<<"\n\t\t";
	for(int l=70;l>1;l--){
		cout<<"_";
	}
	
}











