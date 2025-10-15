#include<iostream>
using namespace std;

int fact(int x, int i, int sum, int out){
    if(i == x){
        cout<<sum;
        return sum;
    }
    out = x-i;
    sum = out * sum;
    return fact(x, i + 1, sum, out);
}

int main(){
    int x;
    int i = 0;
    cout<<"Enter the number: ";
    cin>>x;
    fact(x, i, 1, 0);
    return 0;
}