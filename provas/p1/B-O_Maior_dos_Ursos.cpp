#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ans += 1;
    }
 
    cout << ans << "\n";
    
    return 0;
}