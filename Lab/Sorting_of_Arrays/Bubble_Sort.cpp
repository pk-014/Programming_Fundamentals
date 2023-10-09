#include <iostream>
using namespace std;
int main(){
	char rerun;
	do
	{
	system("Color 70");
	cout<<"=>Programming Fundamentals"<<endl;
	cout<<"=>Presented By: Muhammad Asad"<<endl;
    cout<<"Bubble Sorting\n";
    int n;
    cout<<"Enter Length of Array: ";cin>>n;
    int arr[n],temp,c=n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<" value of array: ";cin>>arr[i];
    }
    // Sorting
    for (int i = 0; i < n; i++)
    {
        int b=0;
        for (int j = 1; j < c; j++)
        {
            if (arr[b]>arr[j])            
            {
                temp=arr[b];
                arr[b]=arr[j];
                arr[j]=temp;
            }
            b++;   
        }
        c--;
    }
    cout<<"Bubble_Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
cout<<"\nRerun(y/n)? ";cin>>rerun;
system("CLS");
} while (rerun!='n');
return 0;}

