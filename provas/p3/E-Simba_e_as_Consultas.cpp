#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    string s;
    int q, l, r, size;
    
    cin >> s;
    size = s.size();
 
    vector<int> pSum(size + 1, 0);
 
    for (int i = 0; i < size - 1; i++) {
        pSum[i + 1] += pSum[i];
        if (s[i] == s[i + 1]) {
            pSum[i + 1]++;
        }
    }
 
    cin >> q;
 
    while (q--) {
        cin >> l >> r;
        r--;
        cout << pSum[r] - pSum[l - 1] << "\n";
    }
 
    return 0;
}