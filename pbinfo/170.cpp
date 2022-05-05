#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll n;
int mini, maxi;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    maxi = n%10;
    mini = n%10;
    n /= 10;
    while(n){
        if(n%10 > maxi){
            maxi = n%10;
        }
        if(n%10 < mini){
            mini = n%10;
        }
        n /= 10;
    }
    cout << maxi+mini;

    return 0;
}