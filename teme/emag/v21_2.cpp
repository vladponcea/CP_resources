#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int nr;
char s[256], *p, t[256];

int32_t main() {
    cin.getline(s, 255);
    p = strtok(s, " ");
    for (int i = 0; i < strlen(p); i++) {
        if(strchr("aeiou", p[i])) 
            nr++;
    }
    strcat(t, p);
    t[strlen(t)] = ' '; 
    p = strtok(NULL, " ");
    while(p != NULL) {
        int nr2 = 0;
        for (int i = 0; i < strlen(p); i++) {
            if(strchr("aeiou", p[i])) {
                nr2++;
            }
        }
        if(nr2 != nr) {
            strcat(t, p);
            t[strlen(t)] = ' ';
        } 
        p = strtok(NULL, " ");
    }

    strcpy(s, t);
    cout << s;
}
