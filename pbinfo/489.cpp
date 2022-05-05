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
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int i = 0, j = n-1;
    while(i <= j){
        cout << v[i] << ' ';
        if(i != j){
            cout << v[j] << ' ';
        }
        i++;
        j--;
    }
    

    return 0;
}