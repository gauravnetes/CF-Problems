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

    while (t--) {
        int n; 
        cin >> n; 

        vector<long long> a(n); 

        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long ops = INT_MAX; 
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] <= a[i+1]) {
                long long diff = a[i+1] - a[i]; 
                long long req_ops = diff / 2 + 1; 
                ops = min(ops, req_ops); 
            } else {
                ops = 0; 
            }
        }
        cout << ops << endl;
    }
    return 0; 
}