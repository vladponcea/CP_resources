#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int k, n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x, s = 0;
        cin >> x;
        int aux = x;
        while(x){
            s += x%10;
            x /= 10;
        }
        if(s%k == 0){
            ans += aux;
        }
    }
    
    cout << ans;

    return 0;
}