#include<bits/stdc++.h>
using namespace std; 

typedef unsigned long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t; 

    while (t--) {
        ll a, b, n; 
        cin >> a >> b >> n; 

        vector<ll> x(n); 
        for(int i = 0; i < n; i++) {
            cin >> x[i]; 
        }

        ll maxTime = b; 
        for(int i = 0; i < n; i++) {
            maxTime += min(x[i], a - 1); 
        }

        cout << maxTime << "\n"; 
    }
}