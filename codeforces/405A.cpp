#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(v[j] > v[j+1])
                swap(v[j], v[j+1]);
        }
    }


    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}
