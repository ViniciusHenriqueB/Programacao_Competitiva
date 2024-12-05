#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io
    int t, n, a;
    long long sum, div;
    bool possible;

    cin >> t;
    for (int i = 0; i < t; i++) {
        possible = true;
        sum = 0;
        vector<int> v;

        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            sum += a;
            v.push_back(a);
        }

        if (sum%n == 0) {
            div = sum / n;
            int falta;
            for (int i = 1; i < n - 1; i++) {
                falta = div - v[i - 1];
                v[i - 1] += falta;
                v[i + 1] -= falta;
            }
            if (v[n - 1] != div) 
                possible = false;
        }
        else 
            possible = false;

        if (possible) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    
    return 0;
}