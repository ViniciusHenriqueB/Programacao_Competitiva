#include <vector>
using namespace std;

int buscaBinaria(vector<int> v, int lenght, int query) {
    int first = 0;
    int last = lenght - 1;
    int mid;

    while (first <= last) {
        mid = (first + last) / 2;

        if (v[mid] == query) 
            return mid;
        
        else if (v[mid] < query)
            first = mid + 1;
        
        else 
            last = mid - 1;
    }
    return -1;
}