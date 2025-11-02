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

        long long sumOfAllNos = 0; 
        for (int i = 0; i < n; i++) {
            sumOfAllNos += a[i]; 
        }
        
        if(sumOfAllNos % 2 == 0) 
            cout << "yes" << endl; 
        else 
            cout << "no" << endl; 
    }
    
    return 0; 
}