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
    int t;

    cin >> t;
    while (t--) {
        cin >> s;
        s.erase(s.size() - 1);
        s[s.size() - 1] = 'i';

        cout << s << "\n";
    }

    return 0;
}