#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

set<string> ans;
string str;

void dfs(size_t i, string substr) {
    if (i >= str.size()) {
        if (!substr.empty())
            ans.insert(substr);
        return;
    }

    dfs(i + 1, substr);

    substr += str[i];

    dfs(i + 1, substr);
}

int main() {
    fast_io

    cin >> str;
    string substr;

    dfs(0, substr);

    for (string s : ans) 
        cout << s << "\n";

    return 0;
}