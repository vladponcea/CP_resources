#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int a, b;
ll s;

bool echi(int x){
    int nr = 0, nrp = 0, nri = 0;
    while(x){
        nr++;
        if(x%2 == 0){
            nrp++;
        } else {
            nri++;
        }
        x /= 10;
    }
    if(nr%2 == 0 && nrp == nri){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(echi(i)){
            s += i;
        }
    }
    cout << s;
    

    return 0;
}