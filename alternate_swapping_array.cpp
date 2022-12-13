#include <iostream>
using namespace std;

int main(){
    int number, next;
    std::cout<<"Enter number of elements in array: ";
    cin>>number;
    int arr[number];

    // Initialization of elements in array
    for(int i=0; i<number; i++){
        cout<<"Element "<<i+1<<"= ";
        cin>>arr[i];
    }

    // Initial Array
    cout<<"Array elements are"<<endl;
    for(int i=0; i<number; i++){
        cout<<"Element "<<i+1<<": "<<arr[i]<<endl;
    }
    // Swapping alternate logic
    for(int i=0; i<number; i++){
        if(i%2==1){
            next= arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=next;
        }
    }

    // Array element after alternate swapping
    cout<<"After Swapping array elements are"<<endl;
    for(int i=0; i<number; i++){
        cout<<"Element "<<i+1<<": "<<arr[i]<<endl;
    }
    return 0;
}