#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, m, v1[11], v2[11];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    while(n){
        v1[n%10]++;
        n /= 10;
    }
    while(m){
        v2[m%10]++;
        m /= 10;
    }
    for(int i = 0 ; i < 11; i++){
        if(v1[i] > 0 && v2[i] > 0){
            cout << "DA";
            return 0;
        }
    }
    cout << "NU";


    return 0;
}