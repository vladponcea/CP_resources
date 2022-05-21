#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int a[101][101];

int main() {

    a[48][47] = 1;
    a[64][27] = 1;
    a[54][28] = 1;
    a[80][83] = 1;
    a[92][36] = 1;
    
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
