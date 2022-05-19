#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int a[(int)1e6], b[(int)1e6], v[(int)1e6];

int main() {
    int i = 0, j = 0, x;
    while(f >> x) {
        if(x%2 == 0) {
            a[i++] = x;
        } else 
            b[j++] = x;
    } 

    int ok = 1;
    while(ok) {
        ok = 0;
        for (int k = 0; k < i-1; k++) {
            if(a[k] > a[k+1]) {
                int aux = a[k];
                a[k] = a[k+1];
                a[k+1] = aux;
                ok = 1;
            }
        }
    }
        
    ok = 1;
    while(ok) {
        ok = 0;
        for (int k = 0; k < j-1; k++) {
            if(a[k] > a[k+1]) {
                int aux = a[k];
                a[k] = a[k+1];
                a[k+1] = aux;
                ok = 1;
            }
        }
    }

    for (int k = 0; k < i; k++) {
        v[k] = a[k];
    }
    for (int k = i; k < j+i; k++) {
        v[k] = b[k];
    }

    for (int k = 0; k < i+j; k++) {
        cout << v[k] << ' ';
    }

    return 0;
}
