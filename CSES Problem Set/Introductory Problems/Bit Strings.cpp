/*
 Author: Omar Bahgat
 Approach: Every new bit corresponds to double the amount of possibilities.
           Therefore, we multiply by 2 after every new bit and we %
           in between multiplications to prevent overflow.
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

int MOD = 1e9 + 7;
 
void solve(){
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans = (ans * 2) % MOD;
    }
    cout << ans;
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
