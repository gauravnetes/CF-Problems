#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
using namespace std; 

bool check(long long x) {
    long long cnt_of_digits = 0; 
    long long cnt_of_zeros = 0; 
    while(x) {
        if(x % 10 == 0) 
            cnt_of_zeros++; 

        cnt_of_digits++; 
        x /= 10; 
    }
    return cnt_of_zeros == cnt_of_digits - 1; 
}

int main() {
    vector<long long> round_numbers; 
    for (long long i = 1; i <= 999999; i++) {
        if(check(i) == true) 
            round_numbers.push_back(i); 
    }

    int t; 
    cin >> t; 
    while (t--) {
        long long n; 
        cin >> n; 

        long long ans = 0; 
        for (int i = 0; i < round_numbers.size(); i++) {
            if (round_numbers[i] <= n) {
                ans++; 
            } else 
                break; 
        }
        cout << ans << "\n";        
    }
    return 0; 
}