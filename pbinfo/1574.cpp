#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int a, b;

ll sumaDiv(int x){
    int ans = 0;
    for(int i = 1; i*i <= x; i++){
        if(x%i == 0){
            ans += i;
            if(i*i != x){
                ans += x/i;
            }
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    ll sa = sumaDiv(a), sb = sumaDiv(b);
    // cout << sa << ' ' << sb;
    if(a == sb-b && b == sa-a){
        cout << "PRIETENE";
    } else {
        cout << "NU SUNT PRIETENE";
    }

    return 0;
}