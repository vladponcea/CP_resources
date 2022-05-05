#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, a, b, ok;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 0 && a == 0){
            ok = 1;
            a = i;
        }
        v.push_back(x);
    }
    for(int i = n-1; i >= 0; i--){
        if(v[i] % 2 == 0 && b == 0){
            ok = 1;
            b = i;
            break;
        }
    }

    if(ok == 0){
        cout << "NU EXISTA";
    } else {
        int s = 0;
        for(int i = a; i <= b; i++){
            s += v[i];
        }
        cout << s;
    }
    

    return 0;
}