#include<iostream>
using namespace std;

int fun(int i,int n){
    
    if(i < n){
        return i;
    }
    cout<<"Anish"<<endl;
    fun(i-1,n);
}

int main(){
    int i = 10;
    int n = 3;
    fun(i, n);
    return 0;
}