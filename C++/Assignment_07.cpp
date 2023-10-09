#include <iostream>  
using namespace std;  
int main()  
{
int num,i,count=0;
cout<<"enter number";
cin>>num;
for(i=1;i<=num;i++){
	if(num%i==0){
		count++;
	}
}
if(count==2){
	cout<<"prime";
}
else{
	cout<<"not Prime";
}
return 0;  
}  
