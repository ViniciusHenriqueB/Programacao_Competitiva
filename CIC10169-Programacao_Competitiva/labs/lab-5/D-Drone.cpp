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
    queue<pair<int, int>> posicoes;
    pair<int, int> atual = make_pair(n, 0);
    vector<bool> visited(100001, false);

    posicoes.emplace(atual);

    while (true) {
        atual = posicoes.front();
        if (atual.ff == m) {
            cout << atual.ss << "\n";
            break;
        }
        if (atual.ff + 1 <= 100000 && !visited[atual.ff + 1]) {
            posicoes.emplace(make_pair(atual.ff + 1, atual.ss + 1));
            visited[atual.ff + 1] = true;
        }
        if (atual.ff * 2 <= 100000 && !visited[atual.ff * 2]) {
            posicoes.emplace(make_pair(atual.ff * 2, atual.ss + 1));
            visited[atual.ff * 2] = true;
        }
        if (atual.ff - 1 >= 1 && !visited[atual.ff - 1]) {
            posicoes.emplace(make_pair(atual.ff - 1, atual.ss + 1));
            visited[atual.ff - 1] = true;
        }
        if (atual.ff % 2 == 0 && atual.ff / 2 >= 1 && !visited[atual.ff / 2]) {
            posicoes.emplace(make_pair(atual.ff / 2, atual.ss + 1));
            visited[atual.ff / 2] = true;
        }

        posicoes.pop();
    }

    return 0;
}