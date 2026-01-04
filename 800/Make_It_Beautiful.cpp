#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
using namespace std; 

int main () {
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

        sort(a.rbegin(), a.rend()); 
        if(a[0] == a[n-1]) 
            cout << "NO" << "\n"; 
        else {
            cout << "YES" << "\n"; 

            if(a[1] == a[0]) 
                swap(a[1], a[n-1]); 
            
            for (int i = 0; i < n; i++) {
                cout << a[i] << " "; 
            }
            
            cout << "\n"; 
        }
    }
    return 0;
}