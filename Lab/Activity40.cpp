#include<iostream>
using namespace std;
float area(float);
float rad;
int main()
{
char rerun;
do
{
system("Color 70");
cout<<"=>Programming Fundamentals"<<endl;
cout<<"=>Presented By: Muhammad Asad"<<endl;
cout<<endl;
cout<<"Enter the value of Radius: ";cin>>rad;
float c_area=area(rad);
cout<<"Area of the circle is: "<<c_area;
std::cout<<"\nWant to Run Program again?=>\'y\' for YES  =>\'n\' for NO\n";
std::cin>>rerun;
system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}
float area(float radius){
    float circle_area=(3.14159265)*(radius*radius);
    return(circle_area);
}
