#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int a, b, x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    if(a == 0){
        x = b;
    } else if(b == 0){
        x = a;
    } else {
        int r;
        while(b != 0){
            r = a%b;
            a = b;
            b = r;
        }
        x = a;
        for(int i = 1; i <= x; i++){
            if(x%i == 0){
                cout << i << ' ';
            }
        }
    }
    // if(a > b){
    //     for(int i = 1; i < b; i++){
    //         if(a%i == 0 && b%i == 0){
    //             cout << i << ' ';
    //         }
    //     }
    // } else {
    //     for(int i = 1; i < a; i++){
    //         if(a%i == 0 && b%i == 0){
    //             cout << i << ' ';
    //         }
    //     }
    // }
    

    return 0;
}