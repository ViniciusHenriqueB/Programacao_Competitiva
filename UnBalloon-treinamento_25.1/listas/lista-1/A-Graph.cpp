#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, u, k, aux;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        while (k--) {
            cin >> aux;
            graph[i][aux - 1] = 1; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j];
            if (j != n - 1) cout << ' ';
        }
        cout << "\n";
    }


    return 0;
}