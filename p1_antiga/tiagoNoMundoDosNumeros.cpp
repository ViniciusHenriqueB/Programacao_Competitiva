#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            cout << x/2 << " " << x/2 << "\n";
        } else {
            cout << x-1 << " " << "1" << "\n";
        }
    }
}