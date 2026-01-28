#include<bits/stdc++.h>
using namespace std; 

typedef long long ll; 

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t; 
    cin >> t; 
    
    while(t--) {
        int n; 
        cin >> n; 

        string s; 
        cin >> s; 

        int maxStreak = 1; 
        int currStreak = 1; 

        for(int i = 0; i < n; i++) {
            if(s[i] == s[i-1])  
                currStreak++; 
            else 
                currStreak = 1;
        
            maxStreak = max(maxStreak, currStreak); 
        }

        cout << maxStreak + 1 << "\n";  
    }
}