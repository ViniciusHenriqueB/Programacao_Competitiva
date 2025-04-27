#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    ll p, n, x, y, op;
    stack<ll> aumentos;
    cin >> p >> n;
 
    while (n--) {
        cin >> op;
        if (op == 1) {
            cin >> x;
            p += x;
            aumentos.push(x);
        }
        else {
            cin >> y;
            for (int i = 0; i < y; i++) {
                p -= aumentos.top();
                aumentos.pop();
            } 
        }
    }
    cout << p << "\n";
 
    return 0;
}