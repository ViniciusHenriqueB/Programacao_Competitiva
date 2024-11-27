#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

bool ehPossivel(string s) {  //possui caracteres repetidos? possui a?
    sort(s.begin(), s.end());

    if (s[0] != 'a') return false;

    if (s.length() != 1) {
        for (size_t i = 1; i < s.length(); i++) {
            if (s[i] != s[i - 1] + 1) return false;
    }
}
    return true;
}

int main() {
    fast_io
    int t;
    bool alfabetica;
    string entr;

    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> entr;
        alfabetica = true;
        if (ehPossivel(entr)) {
            size_t posA = entr.find('a');
            if (posA != entr.length() - 1){
                for (size_t i = posA + 1; i < entr.length(); i++) {
                    if (entr[i] < entr[i-1]){
                        alfabetica = false;
                            break;
                    }
                }
            }
            if (posA != 0) {
                for (size_t i = 1; i <= posA; i++) {
                    if (entr[i] > entr[i-1]) {
                        alfabetica = false;
                        break;
                    } 
                }
            }
           
        } else alfabetica = false;
        
        if (alfabetica) cout << "YES\n";
        else cout << "NO\n";


    }
    return 0;
}