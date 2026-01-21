struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// 2. The Universal DFS Template (Recursion)
// Mental Hook: "Go Deep."
// Use when: You need to explore every path, find height, or aggregate values.

int dfs(TreeNode* root) {
    // 1. BASE CASE: The stop sign 
    if(!root) return 0; // Or return false/null/INT_MIN based on problem

    // 2. RECURSIVE STEP: Ask the children
    int leftResult = dfs(root->left); 
    int rightResult = dfs(root->right); 

    // 3. LOGIC: Process child data & return result to parent
    // Example: Find Max Depth
    return 1 + max(leftResult, rightResult); 
}



// 3 Types of DFS (Where to PUT the LOGIC): 
void traversal(TreeNode* root) {
    if(!root) return; 

    // PRE-ORDER: Do work BEFORE visiting the children
    // USAGE: Copying a tree, Prefix Notation
    cout << root->val; 

    traversal(root->left); 

    // IN-ORDER: Do work BETWEEN Children
    // USAGE: BST (gives sorted Order)
    cout << root->val; 

    traversal(root->right); 
    
    // POST-ORDER: Do work AFTER visiting the children
    // usage: Deleting a tree, Bottom-Up calculation (Height, Diameter)
    cout << root->val; 
}



// 3. The BFS Template (Level Order)
// Mental Hook: "Go Wide" (Layer by Layer).

// Use when: Shortest path, printing levels, next right pointers.

// Tool: std::queue.

void bfs(TreeNode* root) {
    if(!root) return; 
    
    queue<TreeNode*> q; 
    q.push(root); 

    while(!q.empty()) {
        int levelSize = q.size(); 

        for(int i = 0; i < levelSize; i++) {
            TreeNode curr = q.front(); 
            q.pop(); 

            // Logic 

            if(curr->left) q.push(curr->left); 
            if(curr->right) q.push(curr->right); 
        }
        // level finished
    }
}


// 4. Common Tree Patterns (Copy-Paste Logic)

// A. Maximum Depth (Height)
int maxDepth(TreeNode* root) {
    if(!root) return 0; 
    return 1 * max(maxDepth(root->left), maxDepth(root->right));  
}

// B. Path Sum (Root to Leaf) Checking if any path adds up to targetSum.
bool hasPathSum(TreeNode* root, int targetSum) {
    if(!root) return false; 
    // Check if leaf AND value matches remaining target
    if(!root->left && !root->right) 
        return (targetSum - root->val) == 0 

    // down propagation 
    return hasPathSum(root->left, targetSum - root->val) || 
            hasPathSum(root->right, targetSum - root->val); 
}


// C. Validate BST (Binary Search Tree) Remember: A node must be greater than EVERYTHING in left subtree, not just left child.
bool isValidBST(TreeNode* root, long minVal, long maxVal) {
    if (!root) return true;

    if (root->val <= minVal || root->val >= maxVal) return false;

    // Go Left: Max allowed becomes current val
    // Go Right: Min allowed becomes current val
    return isValidBST(root->left, minVal, root->val) &&
           isValidBST(root->right, root->val, maxVal);
}
// Call with: isValidBST(root, LONG_MIN, LONG_MAX);


// D. Lowest Common Ancestor (LCA) The logic: If p is on my left and q is on my right, I am the LCA.
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) return root;

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left && right) return root; // Found one on each side! I am the split.
    return left ? left : right;     // Both are on one side, pass it up.
}





// 5. Recursion 
// 1. Global Variable vs. Parameter

// Global/Class Member: Good for "Diameter" or "Max Path Sum" where you need to track a value across calls but return something else (like height).

// Parameter: Good for passing "State" down (like currentPathSum or maxValueSoFar).

// 2. Backtracking on Trees If you need to store the path (vector), remember to pop_back after returning from children.
void findPaths(TreeNode* root, vector<int>& currentPath) {
    if (!root) return;
    
    // 1. Choose
    currentPath.push_back(root->val);

    // 2. Explore
    if (!root->left && !root->right) {
        // Found a leaf, save path
    } else {
        findPaths(root->left, currentPath);
        findPaths(root->right, currentPath);
    }

    // 3. Un-Choose (Backtrack) -> Crucial!
    currentPath.pop_back();
}

// 3. The "Boolean AND" Pattern For checking structural equality (like isSameTree or isSymmetric).

return (myCheck) && (checkLeft) && (checkRight);