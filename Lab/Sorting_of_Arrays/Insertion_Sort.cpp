#include <iostream>
using namespace std;
int main(){
	char rerun;
	do
	{
	system("Color 70");
	cout<<"=>Programming Fundamentals"<<endl;
	cout<<"=>Presented By: Muhammad Asad"<<endl;
    cout<<"Insertion Sorting\n";
    int n;
    cout<<"Enter Length of Array: ";cin>>n;
    int arr[n],temp,c=n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<" value of array: ";cin>>arr[i];
    }
//    sorting
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >=0; j--)
        {
            if ((j-1)>=0 && arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }   
        }
    }
    // Final Array
    cout<<"Insertion_Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
cout<<"\nRerun(y/n)? ";cin>>rerun;
system("CLS");
} while (rerun!='n');
return 0;}

