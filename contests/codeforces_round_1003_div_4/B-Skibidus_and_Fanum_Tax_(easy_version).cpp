#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, ans;
    string s;


    cin >> t;
    while (t--) {
        cin >> s;
        ans = s.size();
        for (size_t i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                ans = 1;
                break;
            }
        }
        cout << ans << "\n";

    }
             

    return 0;
}