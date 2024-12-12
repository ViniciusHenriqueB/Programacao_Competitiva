#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io;
    int n, x;
    char c;
    stack<int> saco_do_papai_noel, mais_pesados;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> x;
        if (c == 'A') {
            saco_do_papai_noel.push(x);
            if (mais_pesados.empty())
                mais_pesados.push(x);
            else if (x >= mais_pesados.top()) 
                mais_pesados.push(x);
        }
        
        else if (c == 'V') {
            if (!mais_pesados.empty())
                cout << mais_pesados.top() << "\n";
            else
                cout << "0\n";
        }
            
        
        else {
            if (!saco_do_papai_noel.empty() && saco_do_papai_noel.top() == mais_pesados.top()) {
                mais_pesados.pop();
                saco_do_papai_noel.pop();
            }
            else if (!saco_do_papai_noel.empty())   
                saco_do_papai_noel.pop();
        }
    }
    return 0;
}