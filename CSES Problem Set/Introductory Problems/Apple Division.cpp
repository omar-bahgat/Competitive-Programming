/*
 Author: Omar Bahgat
 
 Approach: Iterate over all subsets using bitmasks. If the i'th bit is equal to one
           in a particular bitmask, we add it to weight_1, else, we add it to weight_2.
           Find the minimum between all the differences of weight_1 and weight_2.
           
 Time Complexity: O(2^n . n)
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    ll ans = 1e18;
    for(int mask = 0; mask < (1 << n); mask++){
        ll weight_1 = 0, weight_2 = 0;
        for(int i = 0; i < n; i++){
            if((mask & (1 << i)) != 0) weight_1 += a[i];
            else weight_2 += a[i];
        }
        ans = min(ans, abs(weight_1 - weight_2));
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
