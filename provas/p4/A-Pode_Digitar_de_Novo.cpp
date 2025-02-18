#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    string str1, str2, input, ans;
    char aux;
 
    cin >> str1 >> str2 >> input;
 
    for (char c : input) {
        if (isdigit(c))
            ans += c;
        else {
            if (c >= 65 && c <= 90) {
                aux = c + 32;
                for (int i = 0; i <= 25; i++) {
                    if (str1[i] == aux)
                        ans += (str2[i] - 32);
                }
            }
        
            else {
                for (int i = 0; i <= 25; i++) {
                    if (str1[i] == c)
                        ans += str2[i];
                }
            }
        } 
            
        
    }
 
    cout << ans << "\n";
 
    return 0;
}