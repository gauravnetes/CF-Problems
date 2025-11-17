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
        
        int cntNeg = 0; 
        int cntPos = 0; 
        for(int i = 0; i < n; i++) {
            if(a[i] == -1) cntNeg++;
            else cntPos++;  
        }

        int ops = 0; 

        while(cntPos < cntNeg) {
            cntNeg--; 
            cntPos++; 
            ops++; 
        }

        if(cntNeg % 2 != 0) ops++; 

        cout << ops << endl; 
    }
    return 0; 
}