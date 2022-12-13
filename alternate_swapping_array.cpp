#include <iostream>
using namespace std;

void get_array(int arr1[], int num){
    for(int i=0; i<num; i++){
        cout<<"Element "<<i+1<<"= ";
        cin>>arr1[i];
    }
}
void swap_array(int arr1[], int num){
    int next;
    for(int i=0; i<num; i++){
        if(i%2==1){
            next= arr1[i];
            arr1[i]=arr1[i-1];
            arr1[i-1]=next;
        }
    }
}

void print_array(int arr1[], int num){
    for(int i=0; i<num; i++){
        cout<<"Element "<<i+1<<": "<<arr1[i]<<endl;
    }
}
int main(){
    int number, next;
    std::cout<<"Enter number of elements in array: ";
    cin>>number;
    int arr[number];
    cout<<"Array Before Swapping"<<endl;
    get_array(arr, number);
    print_array(arr, number);

    cout<<"After Swapping array elements are"<<endl;
    swap_array(arr, number);
    print_array(arr, number);
    
    return 0;
}