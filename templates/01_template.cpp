#include<bits/stdc++.h> 
using namespace std; 

// 1. Dynamic Array (vector): 
// Use when: You need a list that grows, random access O(1), or to sort things.

vector<int> v;                // Empty vector
vector<int> v(n, 0);          // Size n, filled with 0s
vector<int> v = {1, 2, 3};    // Initialization list

// Adding / Removing
v.push_back(5) // add to end: O(1)
v.pop_back(); // Remove from end: O(1)
v.clear(); // Remove all elements 

// Sorting & Searching
// Use when: You need a list that grows, random access ($O(1)$), or to sort things.
sort(v.begin(), v.end()); // O(N log N) Ascending
sort(v.begin(), v.end(), greater<int>()) // O(N log N) Descending
bool exists = binary_search(v.begin(), v.end(), 5); // O(log N) Must be sorted 

// Finder Functionis
auto it = lower_bound(v.begin(), v.end(), 5); // returns iterator to first element >= val
int idx = it - v.begin(); // convert iterator to index 

// Min / Max / Sum 
int mn = *min_element(v.begin(), v.end()); 
int mx = *max_element(v.begin(), v.end()); 
long long sum = accumulate(v.begin(), v.end(), 0LL); // 0LL ensures long long sum 



// 2. Hash Set (set / unordered_set)
// Use when: You need to check "Have I seen this before?" or count unique items.
// Note: std::set is sorted O(log N); unordered_set is unsorted but faster ($O(1)$).
unordered_set<int> st; 

st.insert(10); // add an item: O(1) 
st.erase(10); // Remove an item: O(1)

if(st.count(10)) {
    // Returns 1 if exists, 0 if not
};

// Iteration
for(int x : st){

}; 
    // x is the element (random ordered for unordered_set)



// 3. Dictionary (map / unordered_map): 
// Use when: You need Key-Value pairs (Frequency counters, ID lookups).
unordered_map<int, int> mpp; 

mpp[5] = 10; // key 5 -> value 10
mpp[5]++; // key 5 now maps to 11 (for freq counting)

// Checking Existence 
if(mpp.count(5)) {
    // key 5 exists 
};

// Iteration (key, value)
for(auto &pair : mpp) {
    int key = pair.first; 
    int val = pair.second; 
};


// 4. String (string)
// Use when: Text manipulation.
string s = "Hello";

// Manipulation
s += " World"; // Concatenation
s.push_back('!'); // Add char 
string sub = s.substr(0, 4); // Start at index 0, length 4 ("hell")

// Conversion
int num = stoi("123"); // string to int
string s2 = to_string(123); // int to string

// Sorting 
sort(s.begin(), s.end()); // "cba" -> "abc"



// 5. Stacks & Queues
// Use When: Order Matters (LIFO/FIFO). BFS/DFS helper

// 5.1 Stack (LIFO)
stack<int> st; 
st.push(1); // add to top 
st.top(); // Look at top (returns 1)
st.pop(); // Remove top
bool e = st.empty(); // checks if stack empty. returns true / false

// 5.2 Queue (FIFO)
queue<int> q; 
q.push(1); // Add to Back
q.front(); // Look at Front
q.pop(); // Remove Front 

// 5.3 Priority Queue 
// Use: Always gives you the Biggest (or Smallest) element instantly.
// Max Heap (Default) - Largest on Top
priority_queue<int> pq; 
pq.push(10); 
pq.push(5); 
int top = pq.top(); // returns 10

priority_queue<int, vector<int>, greater<int>> min_pq; 
min_pq.push(10); 
min_pq.push(5); 
int top = min_pq.top(); // Returns 5



// 6. Pair 
// Use when: You need to bundle two things (Coordinates x, y, or Value, Index).

// Mental Hook: "A tuple of 2."
pair<int, int> p = {10, 20}; 
int x = p.first(); 
int y = p.second(); 

vector<pair<int, int>> v; 
v.push_back({1, 2}); 

// Sorting Paris 
// Default Sort: Sorts by .first, then breaks ties with .second
sort(v.begin(), v.end()); 


// 7. Common Tricks / Macros
// Copy this to the top of your file to avoid silly overflow bugs.

using ll = long long; 
const int MOD = 1e9 + 7; 

// Grid directions (Up, Right, Down, Left)
int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};