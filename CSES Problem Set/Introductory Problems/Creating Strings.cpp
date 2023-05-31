/*
 Author: Omar Bahgat
 Approach: Generate all permutations using next_permutation (must sort string first)
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

void solve(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << ans.size() << "\n";
    for(auto u : ans) cout << u << "\n";
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}


