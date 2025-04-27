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
    string s;
    vector<string> arr;
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> s;
        arr.pb(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i%2 == 0) {
                if (j%2 == 0 && arr[i][j] == '.')
                    arr[i][j] = 'B';
                else if (j%2 != 0 && arr[i][j] == '.')
                    arr[i][j] = 'W';
            }
            else {
                if (j%2 == 0 && arr[i][j] == '.')
                    arr[i][j] = 'W';
                else if (j%2 != 0 && arr[i][j] == '.')
                    arr[i][j] = 'B';
            }
        }
    }

    for (string s : arr) {
        cout << s << "\n";
    }

    return 0;
}