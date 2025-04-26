#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, t;
    string s;
    cin >> n >> t >> s;
    
    while (t--) {
        for (int i = 1; i <= n - 1; i++) {
            if (s[i] > s[i - 1]) {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
    }
    cout << s << "\n";

    return 0;
}