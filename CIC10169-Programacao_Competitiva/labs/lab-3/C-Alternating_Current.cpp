#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    fast_io;
    string f;
    stack<char> pilha;
    cin >> f;
    for (char sinal : f) {
        if (!pilha.empty() && sinal == pilha.top()) {
            pilha.pop();
        }
        else
            pilha.push(sinal);
    }
    if (pilha.empty()) 
        cout << "Yes\n";
    else 
        cout << "No\n";
    return 0;
}