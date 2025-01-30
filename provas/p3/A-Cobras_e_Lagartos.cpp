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
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i % 2 != 0) {
                cout << '#';
            }
            else if (i % 4 == 0) {
                if (j == 1)
                    cout << '#';
                else    
                    cout << '.';
            } 
            else {
                if (j == m)
                    cout << '#';
                else
                    cout << '.';
            }
        }
        cout << "\n";
    } 
 
    return 0;
}