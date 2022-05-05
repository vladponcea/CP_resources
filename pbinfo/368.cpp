#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int a, b;

bool pal(int x){
    int aux = x, ogl = 0;
    while(aux){
        ogl = ogl*10 + aux%10;
        aux /= 10;
    }
    if(ogl == x){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    int nr = 0;
    if(a > b){
        swap(a, b);
    }
    for(int i = a; i <= b; i++){
        if(pal(i)){
            nr++;
        }
    }
    cout << nr;
    

    return 0;
}