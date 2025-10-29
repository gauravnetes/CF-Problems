
#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while(t--) {
        char a[10][10]; 
        for(int i = 0; i < 10; i++) {
            string s; 
            cin >> s; 

            for(int j = 0; j < 10; j++) {
                a[i][j] = s[j]; 
            }
        }

        long long total_score = 0; 
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(a[i][j] == 'X') {
                    long long point = min({ i, j, 9-i, 9-j }); 
                    total_score += point + 1; 
                }
            }
        }
        cout << total_score << endl; 
    }
}