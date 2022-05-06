#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("bac.in");

int mini = 100, v[101], x;

int32_t main() {
    while(f >> x) {
        v[x]++;
        if(100 - x < mini && v[100-x] == 0) {
            mini = 100 - x;
        }
    }

    cout << mini;
}
