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
    
    for(int i = n - 1; i >= 0;i--){
        for(int j = 0;j<= i;j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0;i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
}