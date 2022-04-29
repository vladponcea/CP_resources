#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n;
    r = n % 3;
    n /= 3;
    if(r == 0){
        cout << n << ' ' << n << ' ' << n;
    } else if(r == 1){
        cout << n << ' ' << n << ' ' << n+1; 
    } else {
        cout << n << ' ' << n+1 << ' ' << n+1;
    }


    return 0;
}