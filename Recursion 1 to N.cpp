#include<iostream>
using namespace std;

int fun(int i,int n){
    
    if(i > n){
        return i;
    }
    cout<<"Anish"<<endl;
    fun(i+1,n);
}

int main(){
    int i = 5;
    int n = 10;
    fun(i, n);
    return 0;
}