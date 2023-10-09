#include<iostream>
using namespace std;
float r_len,r_wid,r_area;
float rec_area(float,float);
int main()
{
char rerun;
do
{
system("Color 70");
cout<<"=>Programming Fundamentals"<<endl;
cout<<"=>Presented By: Muhammad Asad"<<endl;
cout<<endl;

cout<<"Enter Length of rectangle: ";cin>>r_len;
cout<<"Enter Width of rectangle: ";cin>>r_wid;
cout<<"The Area of Rectangle will: "<<rec_area(r_len,r_wid);
std::cout<<"\nWant to Run Program again?=>\'y\' for YES  =>\'n\' for NO\n";
std::cin>>rerun;
system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}
float rec_area(float rectangle_length,float rectangle_width){
    float rectangle_area=rectangle_length*rectangle_width;
    return(rectangle_area);
}
