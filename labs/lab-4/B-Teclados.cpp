#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    string t1, t2, s, ans;
    map<char, char> mapa;
    int n;

    cin >> t1 >> t2 >> n;
    for (int i = 0; i < 26; i++) {
        mapa[t1[i]] = t2[i];
    } 

    for (int i = 0; i < n; i++) {
        cin >> s;
        ans = "";

        for (char c : s) {
            if (c >= 65 && c <= 90)
                ans += mapa[c + 32] - 32;
            else if (c >= 97 && c <= 122)
                ans += mapa[c];
            else
                ans += c;
        }
        cout << ans << "\n";
    }

    return 0;
}