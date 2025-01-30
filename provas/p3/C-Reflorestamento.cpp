#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int n, m, q, l, r, x, sum;
    
    cin >> n >> m >> q;
 
    vector<int> arr(n + 1, 0), delta(n + 2, 0);
 
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    while (q--) {
        cin >> l >> r >> x >> m;
        if (m >= 1 && m <= 5) {
            delta[l] += x;
            delta[r + 1] -= x;
        }
    }
 
    sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += delta[i];
        cout << sum + arr[i] << ' ';
    }
    cout << "\n";
 
 
    return 0;
}