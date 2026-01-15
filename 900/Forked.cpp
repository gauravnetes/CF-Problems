#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O (Crucial for C++)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int x_k, y_k;
        cin >> x_k >> y_k;

        int x_q, y_q;
        cin >> x_q >> y_q;

        vector<pair<int, int>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b}, 
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<long long, long long>> king_attacks; 
        for(auto p : moves) 
            king_attacks.insert({x_k + p.first, y_k + p.second}); 

        set<pair<long long, long long>> queen_attacks; 
        for(auto p : moves) 
            queen_attacks.insert({x_q + p.first, y_q + p.second});
            
        
        int ans = 0; 
        for(auto pos : king_attacks) {
            if(queen_attacks.count(pos)) 
                ans++;
        }
        

        cout << ans << "\n"; 
    }
    return 0;
}