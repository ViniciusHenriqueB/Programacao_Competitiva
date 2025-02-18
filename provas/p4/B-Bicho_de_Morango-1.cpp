#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int n, m, ans = 0;
    string str;
    cin >> n >> m;
 
    vector<bool> bichoLinha(n, false);
    vector<bool> bichoColuna(m, false);
    vector<string> bolo;
    vector<vector<bool>> visited(n, vector<bool>(m, false)); 
 
    for (int i = 0; i < n; i++) {
        cin >> str;
        bolo.pb(str);
        for (int j = 0; j < m; j++) {
            if (str[j] == 'S') {
                bichoLinha[i] = true;
                bichoColuna[j] = true;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (!bichoLinha[i]) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j]) {
                    ans++;
                    visited[i][j] = true;
                }
            }
        } 
    }
 
    for (int j = 0; j < m; j++) {
        if (!bichoColuna[j]) {
            for (int i = 0; i < n; i++) {
                if (!visited[i][j]) {
                    ans++;
                    visited[i][j] = true;
                }
            }
        }
    }
 
    cout << ans << "\n";
 
 
    return 0; 
}