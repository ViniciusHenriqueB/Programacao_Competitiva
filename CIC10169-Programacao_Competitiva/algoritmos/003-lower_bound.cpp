#include <bits/stdc++.h>
using namespace std;

int lower_bound_vini(vector<int> arr, int key) {
    int l, r, mid, ans;
    l = 0;
    r = arr.size() - 1;
    ans = -1;

    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] >= key) {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    return ans;
}
