#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
using namespace std; 

int main() {
    int t; 
    cin >> t;

    while (t--) {

        int n, k, x; 
        cin >> n >> k >> x; 

        if(x != 1) {
            cout << "yes\n"; 
            cout << n << endl; 

            for (int i = 0; i < n; i++) {
                cout << 1 << " "; 
            } 
            cout << endl;  
        } else if (x == 1) {
            if(k == 1) cout << "no" << endl; 
            else if (k == 2) {
                if (n % 2 == 0) {
                    cout << "yes\n"; 
                    cout << n / 2 << endl; 
                    for (int i = 0; i < n / 2; i++) {
                        cout << 2 << " "; 
                    }
                    cout << endl; 
                } else {
                    cout << "no" << endl;
                }
            } else {
                if (n % 2 == 0){
                    cout << "YES\n";
                    cout << n / 2 << "\n";

                    for (int i = 0; i < n / 2; i++) {
                        cout << 2 << " "; 
                    } 
                    cout << endl; 
                } else {
                    cout << "yes\n"; 
                    int num_twos = (n - 3) / 2; 
                    cout << num_twos + 1 << endl; 
                    cout << 3 << " "; 
                    for (int i = 0; i < (n-3) / 2; i++) {
                        cout << 2 << " "; 
                    }
                    cout << endl; 
                }
            }
        }  
    }
    
    return 0;  
}