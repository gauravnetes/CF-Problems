#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
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
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        int cnt2 = 0; 

        for (int i = 0; i < n; i++) {
            if(a[i] == 2) cnt2++; 
        }

        if (cnt2 % 2 == 1) {
            cout << -1 << endl; 
        } else if(cnt2 == 0) {
            cout << 1 << endl;
        } else {
            int target = cnt2 / 2; 
            int currCnt = 0; 
            int k = -1; 
            
            for (int i = 0; i < n; i++) {
                if (a[i] == 2) {
                    currCnt++; 
                }

                if (currCnt == target) {
                    k = i + 1; 
                    break; 
                }
            }
    
            cout << k << endl; 
        }
        
    }
    return 0; 
}