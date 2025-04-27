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
    cin >> n >> m;

    if (n > m)
        cout << n - m;
    else {
        queue<pair<int, int>> busca;
        pair<int, int> atual;
        vector<bool> visited(10001, false);
        busca.emplace(make_pair(n, 0));
    
        while (true) {
            atual = busca.front();
            visited[atual.ff] = true;
     
            if (atual.ff == m) {
                cout << atual.ss << "\n";
                break;
            }
    
            if (atual.ff - 1 >= 1 && !visited[atual.ff - 1])
                busca.emplace(make_pair(atual.ff - 1, atual.ss + 1));
                
            if (atual.ff * 2 <= 10000 && !visited[atual.ff * 2])
                busca.emplace(make_pair(atual.ff * 2, atual.ss + 1));
            
            busca.pop();
        }
    }

    return 0;
}