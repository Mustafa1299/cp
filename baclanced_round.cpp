#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    int i = 0; int c = 1; int mx = 0;
    while(i < n - 1) {
        if(abs(v[i] - v[i+1]) <= k) {
            c++;
        } else {
            c = 1;
        }
        mx = max(mx, c);
        i++;
    }
    
    if(n == 1) {
        cout << "0" << "\n";
    } else {
        cout << n - mx << "\n"; 
    }
    
}
 
 
int main () {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}
