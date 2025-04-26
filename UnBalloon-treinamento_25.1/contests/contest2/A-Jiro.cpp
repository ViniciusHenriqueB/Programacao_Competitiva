#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    char sab, sac, sbc, ans;
    cin >> sab >> sac >> sbc;

    if ((sab == '>' && sbc == '>') || (sbc == '<' && sab == '<'))
        ans = 'B';
    if ((sab == '>' && sac == '<') || (sab == '<' && sac == '>'))
        ans = 'A';
    if ((sac == '>' && sbc == '<') || (sac == '<' && sbc == '>'))
        ans = 'C';
    
    cout << ans <<  "\n";



    return 0;
}