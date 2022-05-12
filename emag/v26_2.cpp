#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int v[26], ok;
char s[101], *p, t[101];

int32_t main() {
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL) {
        for (int i = 0; i < 26; i++) {
            v[i] = 0;
        }

        for (int i = 0; i < strlen(p); i++) {
            v[p[i]-97]++;
        }
        
        int ok2 = 1;
        for (int i = 0; i < 26 && ok2; i++) {
            if(v[i] > 1)
                ok2 = 0;
        }

        if(ok2) {
            ok = 1;
            strcat(t, p);
            t[strlen(t)] = ' ';
        }

        p = strtok(NULL, " ");
    }

    if(ok == 0)
        cout << "nu exista";
    else 
        cout << t;
}
