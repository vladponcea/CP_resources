#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 

int desc(char s[], char t[]) {
    if(strlen(s)%2 == 0 && strlen(t)%2 != 0) {
        strcpy(s+strlen(s)/2, s+strlen(s)/2+1);
        if(strcmp(s, t) == 0) {
            return 1;
        }
    }
    return 0;
}

char s[101], v[50][51], *p;
int n, ok;

int32_t main() {
    cin.getline(s, 101);
    
    p = strtok(s, " ");
    while(p != NULL) {
        strcpy(v[n], p);
        n++;
        p = strtok(NULL, " ");
    }

    ok = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if(desc(v[i], v[j]) == 1)
                ok = 1;
        }
    }

    if(ok) 
        cout << "DA";
    else 
        cout << "NU";
}
