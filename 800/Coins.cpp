#include<bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t;
    cin >> t;  
    while(t--) {
        long long n, k; 
        cin >> n >> k; 

        if(n % 2 == 0 || (n - k) % 2 == 0) {
            cout << "Yes" << endl; 
        } else {
            cout << "No" << endl; 
        }
    }
    return 0; 
}