#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void sub(int &n, int v[]) {
    int maxi = v[0], mini = v[0];
    for (int i = 0; i < n; i++) {
        if(v[i] > maxi)
            maxi = v[i];
        if(v[i] < mini)
            mini = v[i];
    }

    for (int i = 0; i < n; i++) {
        if(v[i] == mini) {
            for (int j = i; j < n-1; j++) {
                v[j] = v[j+1];
            }
            n--;
            break;
        }
    }
    
    for (int i = n-1; i >= 0; i--) {
        if(v[i] == maxi) {
            for (int j = n-1; j >= i; j--) {
                v[j+1] = v[j];
            }
            v[i] = maxi;
            n++;
            break;
        }
    }
}

int n = 10, v[] = {35, 98, 52, 4, 98, 51, 1, 11, 1, 65};

int32_t main() {
    sub(n, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}
