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
    char c, aux;
    int q, op, l, r, pos, ans; 
    vector<set<int>> caracteres(26);

    cin >> s;
    for (size_t i = 1; i <= s.size(); i++) 
        caracteres[s[i - 1] - 'a'].insert(i);
    
    cin >> q;
    while(q--) {
        cin >> op;

        if (op == 1) {
            cin >> pos >> c;
            aux = s[pos - 1];
            caracteres[aux - 'a'].erase(pos);
            // for (int i = 0; i < 26; i++) {
            //     if (caracteres[i].count(pos)) {
            //         caracteres[i].erase(pos);
            //         break;
            //     }
            // }
            caracteres[c - 'a'].insert(pos);
            s[pos - 1] = c;
        }
            
        else {
            cin >> l >> r;
            ans = 0;
            for (int i = 0; i < 26; i++) {
                if (caracteres[i].empty())
                    continue;
                auto it = upper_bound(caracteres[i].begin(), caracteres[i].end(), r);
                if (it != caracteres[i].begin()) {
                    it--; // Aponta para a primeira pos <= r
                    if (*it >= l)
                        ans++;
                }
                
            }
            cout << ans << "\n";
        }
    }

    return 0;
}