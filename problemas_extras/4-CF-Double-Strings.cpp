#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        vector<set<string>> hash(9);
        vector<string> strings;
        string s, ans, substr1, substr2;
        bool flag;
        int sizeS, sizeSubstr2;
        for (int i = 0; i < n; i++) {
            cin >> s;
            strings.pb(s);
            int index = s.size();
            hash[index].insert(s);
        }

        for (string s : strings) {
            sizeS = s.size();
            flag = false;
            for (int j = 1; j <= sizeS; j++) {
                substr1 = s.substr(0, j);
                sizeSubstr2 = sizeS - j;
                if (hash[j].count(substr1)) {
                    substr2 = s.substr(j, sizeSubstr2);
                    if (hash[sizeSubstr2].count(substr2)) {
                        flag = true;
                        break;
                    }
                }
            }

            if (flag) 
                ans += "1";
            else
                ans += "0";
        }

        cout << ans << "\n";
    }

    return 0;
}