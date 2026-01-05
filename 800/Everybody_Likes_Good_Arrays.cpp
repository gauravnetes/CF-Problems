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
        long long n; 
        cin >> n; 

        vector<int> a(n); 
        for (long long i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long ops_cnt = 0; 
        for (long long i = 0; i < n - 1; i++) {
            if((a[i] % 2) == (a[i+1] % 2)) 
                ops_cnt++; 
        }

        cout << ops_cnt << endl;    
    }
    
}