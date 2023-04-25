#include<iostream>
using namespace std;

class demo
{
    public:
    int num1, num2;

    int multiply(int x, int y)
    {
        cout<<"Enter 1st number to multiply with x and y: ";
        cin>>num1;
        cout<<"Enter 2nd number to multiply with x and y: ";
        cin>>num2;
        return x*y*num1*num2;
    }
};

int main()
{
    demo d1;
    int val1, val2;
    cout<<"Enter the value of x: ";
    cin>>val1;
    cout<<"Enter the value of y: ";
    cin>>val2;
    int ans=d1.multiply(val1, val2);
    cout<<"Final answer is "<<ans;
    return 0;
}