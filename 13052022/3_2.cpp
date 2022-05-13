#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, nr;
char s[101], *p;

int main() {
    cin.getline(s, 101);
    cin >> n;
    p = strtok(s, " ");
    while(p != NULL) {
        if(strlen(p) == n) {
            cout << p << '\n';
            nr++;
        }

        p = strtok(NULL, " ");
    }

    if(nr == 0)
        cout << "nu exista";

    return 0;
}
