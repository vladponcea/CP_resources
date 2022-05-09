#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int n;
vector<int> l;
vector<int> r;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        l.push_back(x);
        r.push_back(y);
    }

    int k;
    cin >> k;
    int i = 0;
    
    while(k >= l[i] && k > r[i])
        i++;
    
    cout << l.size() - i;

    return 0;
}
