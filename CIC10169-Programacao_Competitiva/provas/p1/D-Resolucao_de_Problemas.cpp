// Upsolving

#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    fast_io

    long long n, a, ans = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int num : v) {
        if (num > ans) 
            ans += 1;
    }
    cout << ans << "\n";
    
    return 0;
}