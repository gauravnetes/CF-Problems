#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while(t--) {
        int n, k; 
        cin >> n >> k; 

        vector<int> a(n); 
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        bool exist = false; 
        for(int i = 0; i < n; i++) {
            if(a[i] == k) {
                exist = true; 
                break;  
            }
        }
        if(exist) cout << "yes" << endl; 
        else cout << "no" << endl;  
    } 

    return 0;  
} 