#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

char getCat(int x) {
    if(x%4 == 1)
        return 'A';
    else if(x%4 == 3)
        return 'B';
    else if(x%4 == 2)
        return 'C';
    else
        return 'D';
}

int main() {
    int x, nr;
    cin >> x;
    char c = getCat(x);
    for (int i = 0; i <= 2; i++) {
        if(getCat(x+i) <= c) {
            c = getCat(x+i);
            nr = i;
        }
    }

    cout << nr << ' ' << c;

    return 0;
}
