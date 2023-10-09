#include <iostream>
int fib(int);
using namespace std;
int main(){
    int arr[5]={5,3,4,1,2};
    for (int i = 1; i < 5; i++)
    {
        for (int j = i-1; j >= 0; j--)
        {
            if (arr[j]>arr[j+1] )
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
    cout<<"\n\n\nSorted array:\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}