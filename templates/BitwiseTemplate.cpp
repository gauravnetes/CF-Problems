#include<bits/stdc++.h>
using namespace std; 

1. The Basics 
    - & (AND): Both must be 1. 
    - Effect: Extracts bits / Turns bits OFF. 

    - | (OR): Either is 1. 
    - Effect: Combines bits / Turns bits ON. 

    - ^ (XOR): Different bits return 1. 
    - Effect: Toggle bits / Find Unique Numbers. 

    - ~ (NOT): Flips all bits (0 -> 1, 1 -> 0). 
    - Effect: Inverts the mask. 
    
    << (Left Shift): x << k mutables x by 2^k. 
    >> (Right Shift): x >> k divides x by 2^k. 


2. Tricks (O(1) operations)

    int x = 10;  // BINARY: 1010
    int k = 2;   // POSITION: (0-INDEXED)

    // check if kth bit is set
    bool isSet = (x & (1 << k)); 

    // Set Kth bit (Turn ON)
    x = x | (1 << k); 

    // Clear the Kth bit (Turn OFF)
    x = x & ~(1 << k);

    // Toggle Kth bit (Flip it)
    x = x ^ (1 << k); 

    // Check if number is Odd / Even
    bool isOdd = (x & 1); // True if odd, False if Even

    // Check if Power of 2 
    // LOGIC: Powers of 2 have one '1' bit. (x - 1) flips that bit and all below it. 
    // 8 (1000) & 7 (0111) == 0 
    bool isPowerOfTwo = (x > 0) && ((x & (x - 1)) == 0); 

    // Clear the lowest set bit 
    // 12 (1100) -> 8 (1000)
    x = x & (x - 1); 

    // Get only the lowest set bit 
    // 12 (1100) -> 4 (0100)
    int lowBit = x & -x; 


3. Built-In c++ functions 

    int x = 12; 

    // 1. Count set bits
    int count = __builtin_popcount(x); 
    // Note: Use __builtin_popcountll(x) for long long

    // 2. Count Leading Zeros (clz)
    // finding highest set bit (31 - clz)
    int leadingZeros = __builtin_clz(x); 

    // 3. Count Trailing Zeros (ctz)
    // Useful for finding lowest set bit 
    int trailingZeros = __builtin_ctz(x); 


4. Bitmasking Sets (Iterating Subsets)

    - Represent a small set of elements (N <= 20) as an integer. 
    - Element i is the set if the ith bit is 1. 

    A. Iterate all possible subsets (2^N complexity)

        int n = 3; 
        for(int mask = 0; mask < (1 << n); mask++) {
            for(int i = 0; i < n; i++) {
                if(mask & (1 << i)) {

                    cout << i << " "; 
                }
            }
            cout << "\n"; 
        }

    B. Iterate all sub-masks of a mask (3^N complexity) 
        int m = 13; // binary: 1101
        // Iterates: 1101, 1100, 1001, 1000, 0101... 
        for(int s = m; s; s = (s - 1) & m) {
            // s is a subset of m
        } 



5. XOR Properties (The "Magic" Operator)
    - XOR is the most common operator in tricky logic puzzles.

    - Identity: x ^ 0 = x

    - Self-Inverse: x ^ x = 0 (Two same numbers cancel out!)

    - Associative: a ^ b ^ c is the same in any order.

    - Classic Problem: "Find the single number that appears once while others appear twice."

    int unique = 0;
    for (int x : nums) {
        unique ^= x; // All pairs cancel out, leaving the unique one
    }
    return unique;