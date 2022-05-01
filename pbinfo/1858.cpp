#include <bits/stdc++.h>
using namespace std;

ifstream f("restmare.in");
ofstream g("restmare.out");

typedef long long ll;
typedef long double ld;

ll n, x, s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    if(n%2 == 0){
        s = 1LL * (1+(n/2-1))*(n-2)/2;
    } else {
        s = 1LL * (1+((n-1)/2-1))*((n-1)-2)/2 + (n-1)/2;
    }
    g << s;
    

    return 0;
}