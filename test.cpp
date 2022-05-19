#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];

void f(int x) {
    cout << x; 
    while(x > 0) {
        f(x-1);
        x -= 1;
    }
}

int prim(int x) {
    int nr = 0;
    for (int i = 2; i <= x/2; i++) {
        if(x%i == 0)
            nr++;
    }
    if(nr != 0)
        return 0;
    else
        return 1;
}

int main(){
    f(3);
}
