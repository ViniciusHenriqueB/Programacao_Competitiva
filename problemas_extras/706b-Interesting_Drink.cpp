#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    fast_io
    int n, aux, key, q, ans;
    vector<int> price;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        price.push_back(aux);
    }
    
    sort(price.begin(),price.end());
    
    cin >> q;
    
    while(q--)
    {
        cin >> key;
        ans = upper_bound(price.begin(),price.end(),key) - price.begin();
        cout << ans << "\n";
    }
    
    return 0;
}