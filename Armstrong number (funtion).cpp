#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int armstrong(int x){
    int count = 0;
    int sum = 0;
    int org = x;
    int last_digit = 0;
    
    while(x > 0){
        count = count + 1;
        x = x / 10;
    }
    x = org;
    
    while(x > 0){
        last_digit = x % 10;
        sum = (int)pow(last_digit, count) + sum;
        
        x = x / 10;
    }
    return (sum == org);
}

int main(){
    
    if(armstrong(153)){
        cout<<"This is an armstrong number";
    }
    else{
        cout<<"This is not an armstrong number";
    }
    
}