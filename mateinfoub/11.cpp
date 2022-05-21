#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int a[2023];

int prim(int x) {
    for (int i = 2; i < x; i++) {
        if(x%i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int v[] = {100, 356, 440, 1137, 1901};
    int ans = 0;
    for (int i = 1; i <= 2022; i++) {
        int mini = INT_MAX;
        for (int j = 0; j < 5; j++) {
            if(abs(i - v[j]) < mini) {
                mini = abs(i - v[j]);
            }
        }
        if(prim(mini)) {
            ans++;
        }
    }
    cout << ans;

    return 0;
}
