#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, s;
ll x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        while(x > 9){
            x /= 10;
        }
        s += x;
    }
    cout << s;
    

    return 0;
}