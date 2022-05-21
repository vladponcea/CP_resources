#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int v[] = {50, 100, 300, 250, 500};
float a[] = {0.4, 0.3, 0.1, 0.1, 0.5};

float amestecConcentratie(int v1, int v2, float c1, float c2) {
    return (float)(c1*v1+c2*v2)/(v1+v2);
}

int amestecVolum(int v1, int v2) {
    return v1+v2;
}

int satisfactie(int i, int j) {
    return amestecConcentratie(v[i], v[j], a[i], a[j])*amestecVolum(v[i], v[j]);
}

int main() {
    int maxi = 0, ok = 1, ans = 0;
    while(ok) {
        ok = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if(satisfactie(i, j) > maxi && v[i] && v[j] && a[i] && a[j]) {
                    maxi = satisfactie(i, j);
                    cout << maxi << '\n';
                    ans += maxi;
                    v[i] = 0;
                    v[j] = 0;
                    a[i] = 0;
                    a[j] = 0;
                    ok = 0;
                }        
            }
        }   
    }

    cout << ans << '\n';

    return 0;
}
