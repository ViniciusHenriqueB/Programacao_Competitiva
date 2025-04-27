#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io;
    int t;
    string a;

    cin >> t;
    for (int i = 0; i < t; i++) {
        string b;
        cin >> a;
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 'p') 
                b += 'q';
            else if (a[i] == 'q')
                b += 'p';
            else
                b += 'w';
        }
        cout << b << "\n";
    }
    return 0;
}