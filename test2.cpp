#include <iostream>
#include <cmath>

int n,v[100],sol;

using namespace std;

void afisare(){
    int i,j,x; 
    sol++; 
    cout << "\n Solutia: " << sol << '\n'; 
    
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) 
            if (v[i]==j)
                cout<<"D "; 
            else 
                cout<<"_ "; 
         cout<<'\n'; 
    } 
}

int valid(int k) {
    int i; 
    for (i=1;i<=k-1;i++) 
        if ((v[i]==v[k])||(abs(v[k]-v[i])==(k-i))) 
            return 0; 
    return 1;
} 

int solutie(int k) {
    if (k==n) 
        return 1; 
    return 0;
} 

void BK(int k) {
    int i; 
    for (i=1;i<=n;i++) {
        v[k]=i; 
        if (valid(k)==1) {
            if (solutie(k)==1) 
                afisare();
        else 
            BK(k+1); 
        } 
    } 
} 

int main() {
    cout<<"n= ";
    cin>>n;
    BK(1);
    return 0;
}
