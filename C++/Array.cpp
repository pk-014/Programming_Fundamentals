#include <iostream>
using namespace std;
int main(){
    int n;
	cout<<"Enter Array Length: ";cin>>n;
    cout<<"\nEnter Array Elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int rm_e;
    cout<<"\n\n\nWhat Element you want to replace: ";cin>>rm_e;
    int place_ele;
    cout<<"\n\n\nWhere?: ";cin>>place_ele;
    
    for (int  i = n-1; i>= place_ele; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[place_ele]=rm_e;
    cout<<"\n\n\nAfter completing task\n";
    for (int i = 0; i < n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}
