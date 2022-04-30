#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int nr = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            nr+=2;
        }
        if(i*i == n){
            nr--;
        }
    }
    if(nr%2 == 0){
        cout << "nu";
    } else {
        cout << "da";
    }

    return 0;
}