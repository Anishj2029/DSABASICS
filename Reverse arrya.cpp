#include<iostream>
using namespace std;

int main(){
    int n;
    int a[10];
    int a2[10];
    cout<<"Enter the number of item you has to input : ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
     cout<<"Element no "<<i + 1<<" : ";
     cin>>a[i];
    }
    
    for(int i = 0; i < n ; i++){
        cout<<a[i]<< " | ";
    }
    cout<<endl;
    
    cout<<"Reversing an arrya !!!"<<endl;
    
    for(int i = n - 1; i >= 0; i--){
        a2[n - i - 1] = a[i];
    }
    
    for(int i = 0; i < n ; i++){
        cout<<a2[i]<< " | ";
    }
    cout<<endl;


    
    
}