#include <iostream>
void Arrayfun(int brr[5]){
    for (int  i = 0; i < 5; i++)
    {
        std::cout<<brr[i]<<" ";
    }
    
}
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
    Arrayfun(arr);
    

}
