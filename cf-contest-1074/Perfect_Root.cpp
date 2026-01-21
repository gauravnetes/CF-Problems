#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O (Crucial for C++)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
            
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> a_copy = a;

        for(int i = 0; i < m; i++) {
            int b; 
            long long c; 
            cin >> b >> c; 

            long long a_bi = a[b-1] += c;
            if(a_bi <= h) {
                a[b-1] = a_bi;
            } else {
                a = a_copy; 
            }
        }
        for(int i = 0; i < n; i++) {
            cout << a[i] << " "; 
        }
        cout << "\n"; 
    }
    return 0;
}