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

        int curr_blank = 0; 
        int max_blank = 0; 
        for (int i = 0; i < n; i++) {
            if(a[i] == 0) curr_blank++; 
            else {
                max_blank = max(curr_blank, max_blank); 
                curr_blank = 0; 
            }
        }
        max_blank = max(max_blank, curr_blank); 
        cout << max_blank << endl; 
        
    }
    return 0; 
}