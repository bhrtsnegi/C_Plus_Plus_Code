#include<iostream>
using namespace std;

class looping
{
    public:
    int i=1;

    //while loop
    int whileLoop(int x)
    {
        cout<<endl;
        cout<<"Numbers from 1 to"<<x<<" print here using while loop"<<endl;
        while(i<=x)
        {
            cout<<i<<endl;
            i++;
        } 
        i=1; 
        return 0;
    }

    //do while loop
    int doWhileLoop(int x)
    {
        cout<<endl;
        cout<<"Numbers from 1 to"<<x<<" print here using do while loop"<<endl;
        do
        {
            cout<<i<<endl;
            i++;
        }while(i<=x);
    }
    // for loop
    int forLoop(int x)
    {
        cout<<endl;
        cout<<"Numbers from 1 to"<<x<<" print here using for loop"<<endl;
        for(int i=1; i<=x; i++)
        {
            cout<<i<<endl;
        }
    }
};

//main body
int main()
{
    looping l;
    int n;
    cout<<"Enter the number of positive integer you want to print: ";
    cin>>n;
    l.whileLoop(n);
    l.doWhileLoop(n);
    l.forLoop(n);
    return 0;
}