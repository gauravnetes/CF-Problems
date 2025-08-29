#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath>
using namespace std; 

long long minCapacity(vector<long long> &pointsArr, int n) {
    long long maxDistBWPoints = INT_MIN;  
    for(int i = 1; i < n; i++) {
        if(i == n - 1) // if it's last point -> x, the distance is double of it
            maxDistBWPoints = max(maxDistBWPoints, 2 * (pointsArr[i] - pointsArr[i - 1])); 
        else 
            maxDistBWPoints = max(maxDistBWPoints, pointsArr[i] - pointsArr[i - 1]); 
    }
    return maxDistBWPoints; 
}
int main() {
    int t; 
    cin >> t; 
    while(t--) {
        long long n, x; 
        cin >> n >> x;

        vector<long long> pointsArr;
        
        pointsArr.push_back(0);  
        for(int i = 0; i < n; i++) {
            long long point; 
            cin >> point; 
            pointsArr.push_back(point); 
        }
        pointsArr.push_back(x); 
        n = pointsArr.size(); 
        
        long long minC = minCapacity(pointsArr, n); 
        cout << minC << endl; 
    }
    return 0; 
}

// TC => O(n) => O(50)
// SC => O(n + 2) => O(n) 