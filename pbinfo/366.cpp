#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n;

bool cifCom(int x, int y){
    int v1[11], v2[11];
    for(int i = 0; i < 11; i++){
        v1[i] = 0;
        v2[i] = 0;
    }

    while(x){
        v1[x%10]++;
        x /= 10;
    }

    while(y){
        v2[y%10]++;
        y /= 10;
    }
    int nr = 0;
    for(int i = 0; i < 11; i++){
        if(v1[i] > 0 && v2[i] > 0){
            nr++;
        }
    }
    if(nr == 0){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 2; i <= n; i++){
        int p = i*i, c = i*i*i;
        if(cifCom(p, c) == 0){
            cout << i << ' ';
        }
    }

    return 0;
}