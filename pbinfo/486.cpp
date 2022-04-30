#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, mini, maxi, x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> x;
    mini = x;
    maxi = x;
    for(int i = 0; i < n-1; i++){
        cin >> x;
        if(x > maxi){
            maxi = x;
        }
        if(x < mini){
            mini = x;
        }
    }
    cout << mini << ' ' << maxi;

    return 0;
}