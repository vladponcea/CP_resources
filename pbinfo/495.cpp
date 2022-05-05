#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, x[201];

bool prim(int x) {
    for(int i = 2; i*i <= x; i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    for(int i = n-1; i >= 0; i--){
        if(prim(x[i])){
            cout << x[i] << ' ';
        }
    }

    

    return 0;
}