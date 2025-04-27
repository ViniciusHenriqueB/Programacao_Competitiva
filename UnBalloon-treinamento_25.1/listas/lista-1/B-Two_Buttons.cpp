#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, m;
    queue<pair<int, int>> canais;
    pair<int, int> atual;
    vector<bool> visited(10001, false);
    
    cin >> n >> m;

    canais.push({n, 0});
    visited[n] = true;

    while(true) {
        atual = canais.front();
        canais.pop();

        if (atual.ff == m) {
            cout << atual.ss << "\n";
            break;
        }

        if (atual.ff * 2 <= 10000 && !visited[atual.ff * 2]) {
            canais.push({atual.ff * 2, atual.ss + 1});
            visited[atual.ff * 2] = true;
        }
        
        if (atual.ff - 1 >= 0 && !visited[atual.ff - 1]) {
            canais.push({atual.ff - 1, atual.ss + 1});
            visited[atual.ff - 1] = true;
        }
    }

    return 0;
}