#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int s, d;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }
    
    for (int i = 0; i < n; i++) {
        if(i%2 == 0) {
            if(v.front() > v.back()) {
                s += v.front();
                v.erase(v.begin());
            } else {
                s += v.back();
                v.erase(v.end() - 1);
            }
        } else {
            if(v.front() > v.back()) {
                d += v.front();
                v.erase(v.begin());
            } else {
                d += v.back();
                v.erase(v.end() - 1);
            }
        }
    }

    cout << s << ' ' << d;

    return 0;
}
