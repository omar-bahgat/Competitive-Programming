/*
 Author: Omar Bahgat
 Approach: Simulate the algorithm
 */
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    ll n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        (n % 2 == 0) ? n /= 2 : n = n * 3 + 1;
    }
    cout << n << " ";
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
