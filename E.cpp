// egypt.team.dev31

#include <bits/stdc++.h>
using namespace std;
 
void solve () {
    long long n, c; cin >> n >> c;
    vector<long long> v;
    
    for(long long i = 0; i < n; i++) {
        long long s; cin >> s;
        v.push_back(s);
    }
    
    long long left = 0, right = c, mid; 
    
    while (left < right) {
        mid = (left + right ) / 2;
        long long cba_sum = 0;
        for(long long i = 0; i < n; i++) {
            long long cba = pow((v[i] + (2 * mid)), 2);
            cba_sum += cba;
        }
        
        if(cba_sum == c) {
            cout << "SOLUTION: " << mid << "\n";
            break;
        } else if (cba_sum < c) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}
 
int main () {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}
