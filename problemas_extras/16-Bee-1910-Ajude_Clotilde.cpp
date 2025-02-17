#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int o, d, k, aux;
    pair<int, int> atual;

    while (true) {
        cin >> o >> d >> k;
        if (o == 0) 
            break;
        
        vector<bool> visited(100001, false);
        queue<pair<int, int>> canais;

        while (k--) {
            cin >> aux;
            visited[aux] = true;
        }

        atual = make_pair(o, 0);
        canais.emplace(atual);
        while (true) {
            atual = canais.front();

            if (canais.empty()) {
                cout << "-1\n";
                break;
            }

            if (atual.ff == d) {
                cout << atual.ss << "\n";
                break;
            }

            if (atual.ff + 1 <= 100000 && !visited[atual.ff + 1]) {
                canais.emplace(make_pair(atual.ff + 1, atual.ss + 1));
                visited[atual.ff + 1] = true;
            }

            if (atual.ff * 2 <= 100000 && !visited[atual.ff * 2]) {
                canais.emplace(make_pair(atual.ff * 2, atual.ss + 1));
                visited[atual.ff * 2] = true;
            }

            if (atual.ff * 3 <= 100000 && !visited[atual.ff * 3]) {
                canais.emplace(make_pair(atual.ff * 3, atual.ss + 1));
                visited[atual.ff * 3] = true;
            }

            if (atual.ff - 1 >= 0 && !visited[atual.ff - 1]) {
                canais.emplace(make_pair(atual.ff - 1, atual.ss + 1));
                visited[atual.ff - 1] = true;
            }

            if (atual.ff % 2 == 0 && atual.ff / 2 >= 0 && !visited[atual.ff / 2]) {
                canais.emplace(make_pair(atual.ff / 2, atual.ss + 1));
                visited[atual.ff / 2] = true;
            }

            canais.pop();
        }

    }

    return 0;
}