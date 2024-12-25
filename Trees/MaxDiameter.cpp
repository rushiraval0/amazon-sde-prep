/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int dfs(TreeNode* node,int &res )
    {   
        if(!node)
            return 0;
        
        int ln = dfs(node->left, res);
        int rn = dfs(node->right, res);

        res = max(ln+rn, res);

        return 1+max(ln,rn);
    }


    int diameterOfBinaryTree(TreeNode* root) {

        int res = 0;
        dfs(root, res);
        return res;      
    }
};