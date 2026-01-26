#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
#include<bits/stdc++.h>
 using namespace std; 

// all the numbers from 1 to i - 1 divides n 
// I can take LCM of all numbers from 1 to i-1

typedef long long ll; 
int main() {
    ll a = 1; 
    for(ll i = 2; i <= 2; i++) {
        a = lcm(a, i)
    }
    cout << a << endl; 
    int t; 
    cin >> t; 

    while(t--) {
        ll n; 
        cin >> n; 

        int i = 1; 
        while(n % i == 0) 
            i++; 

        cout << i - 1 << endl; 
    }
    return 0; 
}