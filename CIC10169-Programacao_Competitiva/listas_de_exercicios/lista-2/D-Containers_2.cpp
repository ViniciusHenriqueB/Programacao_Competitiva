#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int main() {
    fast_io
    string containers;
    vector<stack<char>> pilhas;
    bool empilhado;
    cin >> containers;

    for (char c : containers) {
        stack<char> pilha;
        empilhado = false;
        if (!pilhas.empty()) {
            for (stack<char> &pilha : pilhas) {
                if (c <= pilha.top()) {
                    pilha.push(c);
                    empilhado = true;
                    break;
                }
            }
        }
        if (!empilhado) {
            pilha.push(c);
            pilhas.push_back(pilha);
        }
    }

    cout << pilhas.size() << "\n";
    

    return 0;
}