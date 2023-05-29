/*
 Author: Omar Bahgat
 Approach: Maintain a running maximum of the longest repeated string
           and update the count accordingly after each character
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    string s;
    cin >> s;
    int count = 1, mx = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            count++;
            mx = max(mx,count);
        }
        else count = 1;
    }
    cout << mx;
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
