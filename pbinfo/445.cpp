#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    long long s = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            s += i;
            if(i*i != n){
                s += n/i;
            }
        }
    }

    if(s%n == 0){
        cout << "DA";
    } else {
        cout << "NU";
    }

    return 0;
}