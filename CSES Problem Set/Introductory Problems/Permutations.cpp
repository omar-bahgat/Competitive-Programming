/*
 Author: Omar Bahgat
 Approach: The only test cases that would fail would be if n is 2 or 3.
           Otherwise, print even numbers up to n then odd numbers up to n.
           Printing odd numbers first would be incorrect if n is 4.
 */
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    int n;
    cin >> n;
    if(n == 2 || n == 3) cout << "NO SOLUTION";
    else{
        for(int i = 2; i <= n; i += 2) cout << i << " ";
        for(int i = 1; i <= n; i += 2) cout << i << " ";
    }
}
            
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--) solve();
}
