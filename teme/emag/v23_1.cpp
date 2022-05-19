#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void formare(int a, int &b) {
    int v[10], i = 0;
    b = 0;
    while(a) {
        v[i] = a%10;
        a /= 10;
        i++;
    }
    for (int j = 0; i < i-1; j++) {
        for (int k = j+1; k < i; k++) {
            if(v[j] > v[k]) {
                int aux = v[j];
                v[j] = v[k];
                v[k] = aux;
            }
        }
    }
    
    int p = 1;
    for (int j = 0; j <= i; j++) {
        b += v[j]*p;
        p *= 10;
    }
}

int a = 6269532, b;

int32_t main() {
    formare(a, b);
    cout << b;
}
