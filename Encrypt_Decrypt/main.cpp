// Libraries Used
#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include<conio.h>
using namespace std;
//-------------------------------------------
// Functions Declaration
void encrypto();
void decrypto();
void lineAdd(char,int);
//-------------------------------------------
// Global Variables
int len,key,act;
string message;
//-------------------------------------------
// Main Function
int main()
{
    // SRAND Function for random values using time()
    srand(time(0));
    //---------------------------------------------------------
    // Variable for Re-running
    char rerun;
    //---------------------------------------------------------
// Do-While Loop
do
{
// System Colors Defined 
system("Color 0A");
//----------------------------------------------
// Author Information
cout<<"\n\n\t\t=>Programming Fundamentals"<<endl;
cout<<"\n\t\t=>Presented By: Muhammad Asad"<<endl;
cout<<"\n\t\t=>Roll No. : BSF2201587"<<endl<<endl;
cout<<endl;
//----------------------------------------------
// Staring of Program
cout<<"\tType Your Message:  ";
std::getline(cin>>ws,message);
len=message.length();
cout<<"\n\t\t1.Encrypt\t\t2.Decrypt"<<endl<<"\t\t";cin>>act;
switch (act)
{
case 1:
    lineAdd('=',70);
    encrypto();
    lineAdd('=',70);
    break;
case 2:
    lineAdd('=',70);
    decrypto();
    lineAdd('=',70);
    break;
default:
lineAdd('=',70);
    cout<<"\n\t\t\t\t\tEnter a valid command\n\n";
    lineAdd('=',70);
    break;
}
//----------------------------------------------
// Working of Do-While Loop
cout<<endl<<"\tWant to Run Program again?(y/n)=>  ";
cin>>rerun;
system("CLS");
}while (rerun!='n');
//----------------------------------------------
}
// End of Main()

//----------------------------------------------



// Functions Definitions
// Encrypto Function Definitaion
void encrypto(){
    key=rand()%1200;
    cout<<"\n\t\t\t\tYour Encrypted message is: ";
    for (int i = 0; i !=len; i++)
    {
        char enc=message[i];
        // Encryption Mode
        char ch=enc+key;
        cout<<ch;
    }
    cout<<endl<<"\t\t\t\tKey For Decryption: "<<key<<endl<<endl;
}
//-------------------------------------------

// Decrypto Function Definition
void decrypto(){
    cout<<endl<<"\t\t\t\tEnter Decryption Key: ";cin>>key;
    cout<<"\n\n\t\t\t\tDecrypted Message: ";
    for (int i = 0; i !=len; i++)
    {
        char dec=message[i];
        // Decryption Mode
        char ch=dec-key;
        cout<<ch;
    }
    cout<<endl<<endl;
}
//-------------------------------------------

// lineAdder Function Definition
void lineAdd(char ch,int n){
    cout<<"\t\t";
    for (int i = 0; i!=n; i++)
    {
        cout<<ch;
    }
    cout<<endl;
}
//-------------------------------------------


//---------------------------------------------------------------
