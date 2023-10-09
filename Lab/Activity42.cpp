#include<iostream>
using namespace std;
float t_bas,t_hei;
float triangle_area(float,float);
int main()
{
char rerun;
do
{
system("Color 70");
cout<<"=>Programming Fundamentals"<<endl;
cout<<"=>Presented By: Muhammad Asad"<<endl;
cout<<endl;

cout<<"Enter Base of Triangle: ";cin>>t_bas;
cout<<"Enter Height of Triangle: ";cin>>t_hei;
cout<<"The Area of Triangle will: "<<triangle_area(t_bas,t_hei);
std::cout<<"\nWant to Run Program again?=>\'y\' for YES  =>\'n\' for NO\n";
std::cin>>rerun;
system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}
float triangle_area(float triangle_base,float triangle_height){
    float triangle_area=0.5*(triangle_base*triangle_height);
    return(triangle_area);
}
