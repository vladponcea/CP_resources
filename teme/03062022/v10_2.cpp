#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101], t[101];

int main() {
    cin.getline(s, 101);
    
    char *p = strtok(s, " ");
    while(p != NULL) {
        char *c = p;
        //cout << c << '\n';
        p = strtok(NULL, " ");
        //cout << p << '\n';
        if(c[strlen(c)-1] == p[strlen(p)-1]) {
            strcat(t, c);
            t[strlen(t)] = ' ';
            strcat(t, "success");
            t[strlen(t)] = ' ';
            strcat(t, p);
            t[strlen(t)] = ' ';
        } else {
            t[strlen(t)] = ' ';
            strcat(t, c);
            t[strlen(t)] = ' ';
            strcat(t, p);
        }
        p = strtok(NULL, " ");
    }
    strcpy(s, t);
    cout << s;

    return 0;
}
