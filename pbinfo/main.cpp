#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// ifstream fin ("nrcurat.in");
// ofstream fout ("nrcurat.out");

int oglindit (int n){
    int ogl = 0;
    while (n){
        ogl = ogl * 10 + (n%10);
        n/=10;
    }
    return ogl;
}

int nr_cifre (int n){
    int nr = 0;
    if (n==0)
        nr = 1;
    else {
        while (n){
            nr++;
            n/=10;
        }
    }
    return nr;
}

int numere9 (int n){
    int x = 0, p = 1;
    
    for (int i=0; i<nr_cifre(n); i++){
        x += 9 * p;
        p*=10;
    }
    return x;
}

int urma (int n){
    int shadow;
    shadow = numere9(n) - n;
    
    return shadow;
}

int main() {
    // int v[1000], i=0, n;
    
    // while (fin >> n){
    //     i++;
    //     v[i] = n;
    // }
    
    // for (i=1; i<=n; i++){
    //     if (urma(v[i]) == oglindit(v[i]))
    //         fout << "1" << " ";
    //     else
    //         fout << "0" << " ";
    // }
      
    int x[100], n;
    cin >> n;
 
    for (int i=0; i<n; i++){
        cin >> x[i];
     
        if (urma(x[i]) == oglindit(x[i]))
            cout << 1 << " ";
        else
             cout << 0 << " ";
    }

    // fin.close();
    // fout.close();
    
    return 0;
}
/*
 int x[100], n;
 cin >> n;
 
 for (int i=0; i<n; i++){
     cin >> x[i];
     
     if (urma(x[i]) == oglindit(x[i]))
         cout << 1 << " ";
     else
         cout << 0 << " ";
 }
 */
