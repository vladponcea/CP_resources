#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, d, nr = 0, maxi = 0;
    cin >> n >> d;
    while(d--) {
        int a = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '0') {
                a++;
            }
        } 
        if(a != 0) {
            nr++;
        } else {
            if(nr > maxi)
                maxi = nr;
            nr = 0;
        }
    }
    if(nr > maxi)
        maxi = nr;
    cout << maxi;

    return 0;
}
