#include<bits/stdc++.h>
using namespace std; 

typedef long long ll; 

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; 
    cin >> t; 

    while(t--) {
        int n; 
        cin >> n; 

        vector<int> res;
        
        
        int midEl = n / 2 + 1; 

        res.push_back(midEl); 
        int ops = midEl; // 4
        int currP = 0; 

        for(int i = 1; i < n; i++) {
            if(i % 2 == 1) {
                currP = ops - i; // 2 
            } else {
                currP = ops + i; // 5 
            }

            res.push_back(currP); // {4, 3, 5, 2}
            ops = currP; // 5
        }

        for(int i = 0; i < n; i++) {
            cout << res[i] << " "; 
        }
        cout << "\n"; 
    }

    return 0; 
}