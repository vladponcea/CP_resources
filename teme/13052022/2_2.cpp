#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[51], *p, t[51];

int main() {
    cin.getline(s, 51);
    p = strtok(s, " ");
    while(p != NULL) {
        if(p[strlen(p) - 1] == '.') {
            if(p[0] == 'C') {
                strcat(t, "COLEGIUL");
            } else if(p[0] == 'L') {
                strcat(t, "LICEUL");
            } else if(p[0] == 'N') {
                strcat(t, "NATIONAL");
            } else {
                strcat(t, "TEORETIC");
            }
        } else 
            strcat(t, p);
        t[strlen(t)] = ' ';
        p = strtok(NULL, " ");
    }

    cout << t;

    return 0;
}
