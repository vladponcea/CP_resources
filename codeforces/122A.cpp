#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

typedef long long ll;
typedef long double ld;
 
int n;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    
    if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0 ) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}
