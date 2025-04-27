#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
 
int main() {
    fast_io
    int t, n, x;
 
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> v;
        set<int> s;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                s.insert(v[i] - v[j]);
            }
        }
        cout << s.size() << "\n";
 
 
    }
 
    return 0;
}