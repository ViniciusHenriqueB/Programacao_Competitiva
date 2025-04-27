#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    fast_io;
    int t, n, a;
    bool flag;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> v;
        flag = true;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]){
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}