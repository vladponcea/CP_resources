#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

char a[101], b[101];
int nr;

int main() {
    cin.getline(a, 101);

    for (int i = 0; i < strlen(a); i++) {
        if(!strchr(b, a[i])) {
            b[strlen(b)] = a[i];
            nr++;
        }
    }

    if(nr%2 != 0)
        cout << "IGNORE HIM!";
    else 
        cout << "CHAT WITH HER!";

    return 0;
}
