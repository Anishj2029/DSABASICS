#include<iostream>
#include<list>
using namespace std;

void printdiv(int x){
    list<int> l1;
    
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            l1.push_back(i);
        }
    }
    l1.sort();
    
    for(auto it = l1.begin() ; it != l1.end(); it++){
        cout<<*it<<" ";
    }

}

int main(){
    int x;
    cout<<"Enter any number : ";
    cin>>x;
    printdiv(x);
    
}