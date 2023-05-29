/*
 Author: Omar Bahgat
 Approach: (sum of first n numbers) - (sum of given numbers) = missing number
 */

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    ll n, x, sum = 0;
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        cin >> x;
        sum += x;
    }
    cout << n * (n + 1) / 2 - sum;
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
