// Practical rep of auto keyword to initiaize datatype at compilation 
#include<iostream>
using namespace std;
int main()
{
    auto x= 7.5;
    auto y= &x; // ADDRESS OF x

    // typeid to tell the datatype for dynamic datatype 
    cout<< "X is having "<<typeid(x).name()<<"datatype"<<endl<<"X is having "<<typeid(y).name()<<"datatype";
    return 0;
}