#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

set<string> ans;

void dfs(string substr) {
    ans.insert(substr);
    char removido;

    for (size_t i = 0; i < substr.size(); i++) {
        removido = substr[i];
        substr.erase(i, 1);
        if (!substr.empty() && !ans.count(substr)) 
            dfs(substr);
        substr.insert(i, 1, removido); 
    }
}

int main() {
    fast_io
    
    string str;

    while (cin >> str) {
        dfs(str);

        for (string s : ans) 
            cout << s << "\n";

        cout << "\n";
        ans.clear();
    }

    return 0;
}