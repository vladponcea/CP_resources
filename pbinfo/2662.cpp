#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n;
ll x, nr, p=1, a[11];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        int maxi = 0;
        while(x){
            if(x%10 > maxi){
                maxi = x%10;
            }
            x /= 10;
        }
        a[i] = maxi;
    }
    for(int i = 0; i < n; i++){
        nr = nr*10 + a[i];
    }
    cout << 1LL*nr*nr;

    return 0;
}