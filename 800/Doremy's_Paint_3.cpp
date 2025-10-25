#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
#include<map>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while(t--) {
        int n; 
        cin >> n; 

        vector<int> a(n); 
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        map<long long, long long> freqMap; 
        for(int i = 0; i < n; i++) {
            freqMap[a[i]]++; 
        } 

        if(freqMap.size() >= 3) 
            cout << "no" << endl; 
        else {
            long long freq_1 = freqMap.begin()->second; 
            long long freq_2 = freqMap.rbegin()->second; 
            if(freq_1 == freq_2) 
                cout << "yes" << endl; 
            else if(n % 2 == 1 && abs(freq_1 - freq_2) == 1) 
                cout << "yes" << endl;
            else 
                cout << "no" << endl;   
        }
    }
    return 0; 
}