#include<iostream>
using namespace std;

int fact(int x, int i, int sum, int out) {
    if (i > x) {           
        cout << sum;
        return sum;
    }

    out = i;               
    sum = out * sum;      
    return fact(x, i + 1, sum, out);
}

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    fact(x, 1, 1, 0);      
    return 0;
}
