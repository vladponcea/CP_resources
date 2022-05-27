#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101], *p, ok = 0;

int main() {
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL) {
        int nrv = 0, nrc = 0;
        for (int i = 0; i < strlen(p); i++) {
            if(strchr("aeiou", p[i]))
                nrv++;
            else
                nrc++;
        }
        if(nrv < nrc) {
            cout << p << '\n';
            ok = 1;
        }
        p = strtok(NULL, " ");
    }
    if(!ok)
        cout << "nu exista";

    return 0;
}
