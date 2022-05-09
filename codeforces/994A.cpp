#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v1(n);
    for (int &val : v1) {
        cin >> val;
    }
    
    vector<int> v2(m);
    for (int &val : v2) {
        cin >> val;
    }
    
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v2.size(); j++) {
            if(v1[i] == v2[j]) {
                cout << v1[i] << ' ';
            }
        }
    }

    return 0;
}
