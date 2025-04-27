#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int a, b, n, m, ans = 0;
    cin >> a >> b >> n >> m;
 
    while (true) {
        if (a - m < b + n)
            break;
        else {
            a -= m;
            b += n;
            ans++;
        }   
 
    }
 
    cout << ans << "\n";
    return 0;
}