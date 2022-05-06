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
    
    int ok = 0;
    do {
        ok = 1;
        for (int i = 0; i < n-1; i++) {
            if(v[i] != mini && v[i+1] == mini) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ok = 0;
            }
        }
    }while(ok == 0);

    do {
        ok = 1;
        for (int i = 0; i < n-1; i++) {
            if(v[i] == maxi && v[i+1] != maxi) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ok = 0;
            }
        }
    }while(ok == 0);
}


int n = 10, v[] = {5, 8, 2, 9, 2, 7, 9, 4, 2, 8};

int32_t main() {
    MinMax(n, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}
