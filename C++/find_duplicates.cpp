#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,5,3,4,2};
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
    cout<<"Second smallest: "<<arr[1];
    cout<<"\n second largest: "<<arr[n-2];

}