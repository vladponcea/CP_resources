#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n, m;
    cin >> n;

    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }
    
    cin >> m;
    vector<int> a(m);
    for (int &val : a) {
        cin >> val;
    }
    
    sort(v.begin(), v.end());
    sort(a.begin(), a.end());
    
    cout << v.back() << ' ' << a.back(); 

    return 0;
}
