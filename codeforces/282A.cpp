#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, x = 0;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s[1] == '+')
            ++x;
        else
            --x;
    }
    cout << x;

   return 0;
}
