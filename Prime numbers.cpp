#include<iostream>
#include<list>
using namespace std;

int isprime(int x){
    
    list<int> l1;
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            l1.push_back(i);
        }
    }
    
    for(auto it = l1.begin(); it!= l1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return l1.size();
}

int main(){
    int x;
    cout<<"Enter the number :";
    cin>>x;
    
    if(isprime(x) == 2){
        cout<<"This is an prime number";
    }
    else{
        cout<<"This is not an prime number";
    }
    
}