#include<iostream>
using namespace std;

void getgcd(int x, int y){
    int gcd = 1;
    
    for(int i = 1; i <= min(x,y); i++){
        if(x % i == 0 && y % i == 0){
            gcd = i;
        }
    }
    cout<<"The GCD is: "<<gcd;
    
}

int main(){
    int x;
    int y;
    cout<<"Enter the 1st number: ";
    cin>>x;
    cout<<endl;
    cout<<"Enter the 2nd number: ";
    cin>>y;

    getgcd(x,y);
    
    
    
}