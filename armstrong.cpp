#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int getcount(int x){
    int count = 0;
    int last_digit = 0;
    while(x > 0){
        last_digit = x % 10;
        x = x /10;
        count = count + 1;
    }
    return count;
}

int main(){
    int x;
    int last_digit;
    cout<<"Enter any number : ";
    cin>> x;
    int original = x;
    int count = getcount(x);
    
    int sum;
    sum = 0;
    while(x > 0){
        last_digit = x % 10;
        sum = (int)pow(last_digit, count) + sum;
         x = x /10;
    }
    cout<<"The sum is:"<<sum<<endl;
    if(original == sum){
        cout<<"This is an armstrong number";
    }
    else
        cout<<"Not an armstrong number";
    
    return 0;
    
}