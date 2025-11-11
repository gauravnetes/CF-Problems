#include<bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t; 

    while(t--) {
        int n; 
        cin >> n; 

        vector<int> a(n);  
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        sort(a.begin(), a.end()); 

        bool can_win = true; 
        for (int i = 1; i < n-1; i+=2) {
            if(a[i] != a[i + 1]) {
                can_win = false; 
                break; 
            }
        }
        
        if(can_win) {
            cout << "Yes" << endl; 
        } else {
            cout << "No" << endl; 
        } 
        
    }

    return 0; 
} 