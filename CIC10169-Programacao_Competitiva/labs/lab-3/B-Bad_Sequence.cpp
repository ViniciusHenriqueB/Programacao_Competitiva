#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    fast_io;
    stack<char> pilha;
    string bs;
    int n;
    cin >> n;
    cin >> bs;
 
    for (int i = 0; i < n; i++) {
        if (!pilha.empty() && bs[i] == ')' && pilha.top() == '(') 
            pilha.pop();
        
        else
            pilha.push(bs[i]);
    }
 
    if (pilha.size() == 2 || pilha.empty())
        if (pilha.size() == 2) {
 
            char aux = pilha.top();
            pilha.pop();
            
            if (pilha.top() == aux) {
                cout << "No\n";
            }
            else
                cout << "Yes\n";
        }
        else
            cout << "Yes\n";
        
    else 
        cout << "No\n";
    
    return 0;
}