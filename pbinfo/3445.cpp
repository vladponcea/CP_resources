#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

ifstream f("leftmax.in");
ofstream g("leftmax.out");

int fact(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n*fact(n-1);
}

int getNr(int x, vector<int> v, int n) {
    int nr = fact(n)/(fact(x)*fact(n-x));
    int maxi = 0, i = 0, pozmaxi = 0, ans = 0, j = 0;
    while(nr) {
        i = j;
        maxi = 0;
        while(i <= x) {
            if(v[i] > maxi) {
                maxi = v[i];
                pozmaxi = i;
            }
            i++;
        }
        if(x/2 == 1 && pozmaxi == 1)
        if(pozmaxi <= x/2) {
            cout << "x: " << x << "  maxi " << maxi  << '\n'; 
            ans++;
        }
        nr--;
        j++;
    }
    cout << ans << ' ' << x << '\n';
    return ans;
}


int main() {
    int n, x;
    f >> n;
    
    vector<int> v(n);
    for (int &val : v) {
        f >> val;
    }
    
    int ans = 0;
    ans += n + 1;
    for (int i = 2; i <= n-1; i++) {
        ans += getNr(i, v, n);
    }
    
    g << ans;


    f.close();
    g.close();
    return 0;
}
