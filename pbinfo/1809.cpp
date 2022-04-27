#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int a, b;

int solve(int a, int b){
    if(b == 0)
        return 1;
    return solve(a, --b)*a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    cout << solve(a, b);
    

    return 0;
}