#include <iostream>
using namespace std;

void fun(int N){
    int sum = 0;          
    for(int i = 0; i <= N; i++){
        sum += i;           
    }
    cout << "Sum: " << sum << endl;  
}

int main(){
    int N;
    cout << "Enter the number: ";
    cin >> N;
    fun(N);              
    return 0;
}
