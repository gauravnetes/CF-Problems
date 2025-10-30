#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int mini_abs = 2000000001; 

    vector<int> a(n);  
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 

        int curr_abs = abs(a[i]); 

        mini_abs = min(curr_abs, mini_abs); 
    }

    cout << mini_abs << endl; 

    return 0; 
}