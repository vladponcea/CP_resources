#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

// int solve(int n){
   
// }

char s[256];

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);
   cin.getline(s, 256);
   for(int i = 0; i < strlen(s); i++){
      if(strchr("aeiou", s[i]))
         cout << s[i] << '\n';
      // cout <<  << '\n';
   }

   return 0;
}
