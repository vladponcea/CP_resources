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
        int s = 0, aux = x[i];
        while(x[i]){
            s += x[i]%10;
            x[i] /= 10;
        }
        y[i] = aux%s;
    }

    for(int i = 0; i < n; i++){
        cout << y[i] << ' ';
    }
    

    return 0;
}