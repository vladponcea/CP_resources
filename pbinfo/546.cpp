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

    int last = v.back();
    for(int i = 0; i < n; i++){
        if(v[i] % last == 0){
            cout << v[i] << ' ';
        }
    }
    

    return 0;
}