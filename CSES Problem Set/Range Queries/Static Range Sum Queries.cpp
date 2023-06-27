/*
 Author: Omar Bahgat
 
 Approach: Use prefix sums

 Time Complexity: O(n + q)
 */
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> a(n+1), pref(n+1);
    
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << "\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
