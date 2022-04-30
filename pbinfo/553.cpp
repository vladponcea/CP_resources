#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, imin=1, imax=1, x, maxi, mini;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin >> x;
    maxi = x;
    mini = x;
    for(int i = 2; i <= n; i++){
        cin >> x;
        if(x > maxi){
            maxi = x;
            imax = i;
        }
        if(x < mini){
            mini = x;
            imin = i;
        }
    }
    cout << imin << ' ' << imax;
    

    return 0;
}