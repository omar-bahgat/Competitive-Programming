/*
 Author: Omar Bahgat
 
 Approach: Make an element just as large as the previous element to minimize the moves.

 Time Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int running_max = a[0];
    ll moves = 0;
    
    for(int i = 1; i < n; i++){
        if(running_max > a[i]) moves += running_max - a[i];
        running_max = max(running_max,a[i]);
    }
    cout << moves;
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
