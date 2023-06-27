/*
 Author: Omar Bahgat
 
 Approach: Insert all values into a set

 Time Complexity: O(n . logn)
 */

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    int n, x;
    cin >> n;
    set<int> st;
    while(n--){
        cin >> x;
        st.insert(x);
    }
    cout << st.size();
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
