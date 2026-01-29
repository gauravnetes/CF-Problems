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

        vector<int> onesIndices; 
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') 
                onesIndices.push_back(i); 
        }

        int addedStudents = 0; 
        if(onesIndices.empty()) 
            addedStudents = (n + 2) / 3; 
        else {
            int startGap = onesIndices[0]; 
            addedStudents += (startGap + 1) / 3; 

            int endGap = n - 1 - onesIndices.back(); 
            addedStudents += (endGap + 1)/ 3; 

            for(size_t i = 0; i < onesIndices.size() - 1; i++) {
                int gap = onesIndices[i+1] - onesIndices[i] - 1; 
                addedStudents += gap / 3;  
            }
        }

        cout << onesIndices.size() + addedStudents << "\n"; 

    }
    return 0;
}