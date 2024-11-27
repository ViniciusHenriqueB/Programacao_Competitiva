#include <iostream>
 
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    if (n%2 != 0) cout << n << "\n";
    else {
        while (n) {
            n = n / 2;
            if (n % 2 != 0) {
                cout << n  << "\n";
                break;
            }
        }
    }    
    
    return 0;
}