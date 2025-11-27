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
        int n; 
        cin >> n;

        string s; 
        cin >> s; 

        int left = 0; 
        int right = n - 1; 

        while (left < right && s[left] != s[right]) {
            left++; 
            right--; 
        }

        if(left > right) 
            cout << 0 << endl; 
        else 
            cout << right - left + 1 << endl;
    }

    return 0; 
}