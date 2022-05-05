#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, x[201], y[201];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < n; j++){
            if(j != i){
                s += x[i];
            }
        }
        y[i] = s;
    }

    for(int i = 0; i < n; i++){
        cout << y[i] << ' ';
    }
    

    return 0;
}