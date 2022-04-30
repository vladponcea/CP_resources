#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, nr, s;
float m;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s += x;
        v.push_back(x);
    }
    m = s/n;
    int nr = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > m){
            nr++;
        }
    }
    cout << nr;
    

    return 0;
}