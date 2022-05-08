#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int n, a, b;
string s;

int main() {
    cin >> n >> s;
    for (int i = 0; i < n-1; i++) {
        if(s[i] == 'S' && s[i+1] == 'F')
            a++;
        else if(s[i] == 'F' && s[i+1] == 'S')
            b++;
    }

    if(a > b)
        cout << "YES";
    else 
        cout << "NO";
    

    return 0;
}
