#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int n, l, r;
    string str;
 
    cin >> n >> str;
    l = n;
    r = n;
    for (char c : str) {
        if (c == 'L') l--;
        else r++;
    }
    cout << r - l + 1 << "\n";
 
    return 0;
}