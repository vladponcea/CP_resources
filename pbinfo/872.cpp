#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n;

void solve(int n, int p){
    if(n == 0)
        return;
    if(n%2 == 0)
        solve(n/2, p*2);
    else{
        cout << p << ' ';
        solve(n/2, p*2);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    solve(n, 1);
    

    return 0;
}