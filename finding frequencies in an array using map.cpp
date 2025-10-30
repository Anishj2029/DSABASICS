#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, length;
    map<int, int> mp;

    cout << "Enter the number of elements you want to enter: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> n;
        mp[n]++; 
    }

    cout << "\nElement : Frequency\n";
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
