#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int a, n, p, nr = 1;

int solve(int a, int n){
    if(n == 0){
        return 1;
    }
    if(n%2 == 1){
        long long temp = solve(a, n-1);
        temp *= a;
        return temp % nr;
    } else {
        long long temp = solve(a, n/2);
        return (temp*temp) % nr;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> n >> p;
    for(int i = 1; i <= p; i++){
        nr *= 10;
    }
    cout << solve(a, n);

    return 0;
}