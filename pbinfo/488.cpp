#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < n; i++){
        if(i%2 != 0){
            cout << v[i] << ' ';
        }
    }
    cout << '\n';

    for(int i = n-1; i >= 0; i--){
        if(i%2 == 0){
            cout << v[i] << ' ';
        }
    }

    return 0;
}