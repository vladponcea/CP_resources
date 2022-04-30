#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, s, nr;
float m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            s += i;
            nr++;
        }
    }
    m = (float)s/nr;
    cout << setprecision(2) << fixed << m;

    return 0;
}