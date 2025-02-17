#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> all_sublists;
vector<int> a;
    
void gerarSubsequencias(size_t i, vector<int> sublist)
{    
    if(i >= a.size()) {
        all_sublists.push_back(sublist);
        return;
    }
    
    /* podemos não pegar o elemento a[i] */
    gerarSubsequencias(i + 1,sublist);
    
    /* podemos pegar o elemento a[i] */
    sublist.push_back(a[i]);
    
    gerarSubsequencias(i + 1,sublist);    
}

int main()
{
    int aux,n;
    vector<int> l;
    
    /* n tem que ser pequeno */
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> aux;
        a.push_back(aux);
    }
    
    gerarSubsequencias(0, l);
    
    for(size_t i = 0; i < all_sublists.size(); i++) {
        cout << "[";
        for(size_t j = 0; j < all_sublists[i].size(); j++) {
            cout << all_sublists[i][j];
            if (j != all_sublists[i].size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }
    
    return 0;
}