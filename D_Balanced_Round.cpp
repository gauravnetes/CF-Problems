#include<bits/stdc++.h>
using namespace std; 

typedef long long ll; 

int main() {
    int t; 
    cin >> t;  

    while(t--) {
        ll n, k; 
        cin >> n >> k; 

        vector<ll> a(n); 
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        sort(a.begin(), a.end()); 

        ll counter = 1; 
        ll ans = 1; 
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i-1] <= k) 
                counter++; 
            else    
                counter = 1; 
            ans = max(ans, counter); 
        }

        int removals = n - ans; 
        cout << removals << "\n"; 
    }
    return 0; 
}