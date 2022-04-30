#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, v[201];

bool primcu(int x, int y){
    int r, d;
    if(y == 0){
        d = x;
    } else {
        while(y != 0){
            r = x%y;
            x = y;
            y = r;
        }
        d = x;
    }
    return d;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    int nr = 0;
    for(int i = 1; i <= n; i++){
        if(primcu(v[i], v[n])){
            nr++;
        }
    }
    cout << nr;
    

    return 0;
}