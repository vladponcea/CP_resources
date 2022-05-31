#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101], *p, t[101];

int main() {
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL) {
        if(p[0] == '-') {
            strcat(t, p+1);
            t[strlen(t)] = ' ';
        } else {
            strcat(t, p);
            t[strlen(t)] = ' ';
        }
        p = strtok(NULL, " ");
    }
    strcpy(s, t);
    cout << s;

    return 0;
}
