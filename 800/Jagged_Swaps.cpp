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
        int n; 
        cin >> n; 
        vector<long long> a(n); 
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        
        if(a[0] == 1) 
            cout << "yes" << endl; 
        else 
            cout << "no" << endl; 
    }
    return 0; 
}