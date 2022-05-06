#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void MinMax(int n, int v[]) {
    int mini = v[0], maxi = v[0];
    for (int i = 0; i < n; i++) {
        if(v[i] > maxi) {
            maxi = v[i];
        }
        if(v[i] < mini) {
            mini = v[i];
        }
    }

    int j = 0, k = n-1;
    for (int i = 0; i < n; i++) {
        if(v[i] == maxi) {
            swap(v[i], v[k]);
            k--;
        }
        if(v[i] == mini) {
            swap(v[i], v[j]);
            j++;
        }
    }
}


int n = 10, v[] = {5, 8, 2, 9, 2, 7, 9, 4, 2, 8};

int32_t main() {
    MinMax(n, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}
