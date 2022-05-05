#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n;

int solve(int x){
    if(x == 0){
        return 0;
    }
    while(x){
        if(x%2 == 0){
            return x%10;
        }
        x /= 10;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cout << solve(n);

    return 0;
}