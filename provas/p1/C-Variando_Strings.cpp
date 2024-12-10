#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    fast_io
    int t;
    string str;
    bool variada;
    cin >> t;
    for (int i = 0; i < t; i++) {
        variada = true;
        cin >> str;
 
        sort(str.begin(), str.end());
 
        for (size_t i = 1; i < str.size(); i++) {
            if (str[i] != str[i - 1] + 1) {
                variada = false;
                break;
            }
        }
        if (variada) 
            cout << "Yes\n";
        else    
            cout << "No\n";
 
    }
    
    return 0;
}