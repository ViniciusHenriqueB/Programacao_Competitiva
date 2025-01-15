#include <bits/stdc++.h> 
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int main() {
    fast_io
    int t;
    string input;

    cin >> t;
    for (int i = 0; i < t; i++) {
        string ans;
        queue<char> par, impar;

        cin >> input;
        for (char c : input) {
            if ((c - '0')%2 == 0) par.push(c);
            else impar.push(c);    
        }

        while (!par.empty() || !impar.empty()) {
            if (par.empty()) {
                ans += impar.front();
                impar.pop();
            }
            
            else if (impar.empty()) {
                ans += par.front();
                par.pop();     
            }

            else {
                if (impar.front() < par.front()) {
                    ans += impar.front();
                    impar.pop();
                }
                else {
                    ans += par.front();
                    par.pop();
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}