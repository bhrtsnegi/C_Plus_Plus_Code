// PROGRAM IS TO FIND THE SIZE OF MULTIPLE DATATYPES USING CLASSES AND OBJECTS

#include<iostream>
using namespace std;

// Class named datatype
class datatypes
{
    public:
    // public data members
    int a;
    char b;
    float c;
    bool d;
    double e;
    long long f;

    // member function named sizeDatatypes 
    int sizeDatatypes()
    {
        cout<<"Enter an integer value: ";
        cin>>a;
        cout<<"Enter a char value: ";
        cin>>b;
        cout<<"Enter a float value: ";
        cin>>c;
        cout<<"Enter a bool value: ";
        cin>>d;
        cout<<"Enter a double value: ";
        cin>>e;
        cout<<"Enter a long value: ";
        cin>>f;
        cout<<endl;
        cout<<"Size and value of the variables are"<<endl<<endl;
        // Size and value print here
        cout<<"Integer-> Size: "<<sizeof(a)<<" Value: "<<a<<endl;
        cout<<"Character-> Size: "<<sizeof(b)<<" Value: "<<b<<endl;
        cout<<"Float-> Size: "<<sizeof(c)<<" Value: "<<c<<endl;
        cout<<"Boolean-> Size: "<<sizeof(d)<<" Value: "<<d<<endl;
        cout<<"Double-> Size: "<<sizeof(e)<<" Value: "<<e<<endl;
        cout<<"Long-> Size: "<<sizeof(f)<<" Value: "<<f<<endl;
        cout<<endl;
        return 0;
    }
};

// main body
int main()
{
    // Object of class datatypes created 
    datatypes d;
    //member function of class called
    d.sizeDatatypes();
    return 0;
}