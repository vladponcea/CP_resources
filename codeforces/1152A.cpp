#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int n, m;

int main() {
    cin >> n >> m;
    
    int p = 0, k = 0;
    vector<int> a(n);
    for (int &val : a) {
        cin >> val;
        if(val%2 != 0)
            p++;
    }
    
    vector<int> b(m);
    for (int &val : b) {
        cin >> val;
        if(val%2 != 0)
            k++;
    }

    int x = n - p;
    int y = m - k;

    cout << min(p, y)+min(x, k) << '\n';
    
     


    return 0;
}
