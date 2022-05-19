#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
char s[101], *p, t[4];
int k;

int32_t main() {
    cin.getline(s, 101);
    
    k = 0;
    p = strtok(s, " ");
    
    for (int i = 0; i < strlen(p); i++) {
        if(strchr("aeiou", p[i]) == NULL) {
            t[0] = p[i];
            k++;
            break;
        }
    }

    p = strtok(NULL, " ");
    for (int i = 0; i < strlen(p); i++) {
        if(strchr("aeiou", p[i]) != NULL) {
            t[1] = p[i];
            k++;
            break;
        }
    }

    t[2] = s[strlen(s) - 1];
    
    if(k != 3)
        cout << "nu exista";
    else
        cout << t;
}
