#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];


int f(int a, int b) {
    if(a > b) return a/b+f(a-b, b);
    if(a < b) return b/a+f(a, b-a);
    return 1;
}

int prim(int x) {
    int nr = 0;
    for (int i = 2; i <= x/2; i++) {
        if(x%i == 0)
            nr++;
    }
    if(nr != 0)
        return 0;
    else
        return 1;
}

int main(){
    char s[20];
    strcpy(s,"stilou");
    cout<<s+4<<endl;
    cout << s[0]-1; 
    s[0]=s[0]-1; s[1]=s[0]-3;
    s[2]=s[0]+1; s[3]=s[0]+3;
    s[4]='\0';
    cout<<s;
}
