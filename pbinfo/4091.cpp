#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

ifstream f("sss.in");
ofstream g("sss.out");

typedef long long ll;
typedef long double ld;
 
int n, c, x, k;
vector<int> v;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    f >> c >> n;
    
    if(c == 1) {
        f >> x;
        v.push_back(x);
        while(x) {
            if(x%10 != 0) {
                k = x%10;
                break;
            }
            x /= 10;
        }
        for (int i = 1; i < n; i++) {
            f >> x;
            v.push_back(x);
        }
        int j = n-1, s = 0;
        while(k) {
            s += v[j];
            j--;
            k--;
        }
        g << s;
    } else {
        for (int i = 0; i < n; i++) {
            f >> x;
            v.push_back(x);
        }

        int k = 1, s = 1;
        while(s <= n) {
            k++;
            s += k;
        }
        k--;

        vector<int> vs;
        int j = 0;
        while(j < n) {
            int a = k;
            s = 0;
            while(a) {
                s += v[j];
                a--;
                j++;
            }
            vs.push_back(s);
            k--;
        }
        
        int maxi = 0;
        for (int i = 0; i < vs.size(); i++) {
            if(vs[i] > maxi) {
                maxi = vs[i];
            }
        }
        cout << maxi;
    }

    return 0;
}
