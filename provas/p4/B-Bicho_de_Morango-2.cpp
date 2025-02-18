#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int n, m, ans = 0, qLinhas = 0;
    string str;
    cin >> n >> m;
 
    vector<bool> bichoLinha(n, false);
    vector<bool> bichoColuna(m, false);
 
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            if (str[j] == 'S') {
                bichoLinha[i] = true;
                bichoColuna[j] = true;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (!bichoLinha[i]) {
            ans += m;
            qLinhas++;
        }
    }
 
    for (int j = 0; j < m; j++) {
        if (!bichoColuna[j]) {
            ans += n - qLinhas;
        }
    }
 
    cout << ans << "\n";
 
 
    return 0; 
}