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
    
    sort(v.begin(), v.end());
    
    int i = 0;
    while(i < v.size() - 1) {
        if(v[i] != 0 && v[i+1] != 0 && v[i] == v[i+1])
    }


    return 0;
}
