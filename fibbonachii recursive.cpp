#include<iostream>
using namespace std;

int fibbo(int n, int p1, int p2, int count){
    if(count == n){
        return 0;
    }
    cout<<p1<<" ";
    return fibbo(n, p2, p1 + p2, count + 1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    fibbo(n,0,1,0);
}