#include<iostream>
using namespace std;

int main(){
    int n;
    int number;
    
    cout<<"Enter the number of elements you want to insert: ";
    cin>>n;
    
    int arr[n];
    
    for(int i = 0;i < n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    
    for(int i = 0; i< n;i++){
        for(int j = i+1;j< n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0;i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
}