#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
 
 
int main(){
    int t, n, ans;
    long long a;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        ans = 0;
        cin >> n;
        long long menor = 10000000;
        vector<int> doces;
        for (int i = 0; i < n; i++) {
            cin >> a;
            doces.push_back(a);
            if (a < menor)
                menor = a;
        }
        for (long long q : doces) {
            ans += q - menor;
        }
 
        cout << ans << "\n";
    }
    return 0;
}