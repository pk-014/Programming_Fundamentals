#include <iostream>
using namespace std;
int main(){
	char rerun;
	do
	{
	system("Color 70");
	cout<<"=>Programming Fundamentals"<<endl;
	cout<<"=>Presented By: Muhammad Asad"<<endl;
    cout<<"Selection Sorting\n";
    int n;
    cout<<"Enter Length of Array: ";cin>>n;
    int arr[n],temp;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<" value of array: ";cin>>arr[i];
    }
    // sorting
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])            
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }  
        }
        
    }
    cout<<"Selection_Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
cout<<"\nRerun(y/n)? ";cin>>rerun;
system("CLS");
} while (rerun!='n');
return 0;}

