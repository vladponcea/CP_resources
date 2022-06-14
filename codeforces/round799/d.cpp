#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string s;
        int x;
        cin >> s >> x;
        
        int h = x/60;
        int m = x%60;
        

        int h1 = stoi(s.substr(0,2));
        int m1 = stoi(s.substr(3, 5));
    
        while(h1 <= 24 && m1 <= 59) {
            
        }
    }

    return 0;
}
