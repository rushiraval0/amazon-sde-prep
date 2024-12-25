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

// DFS
class Solution {
public:

    void dfs(TreeNode* node, int &depth, int &res)
    {
        if(!node)
            return;
        
        depth++;
        dfs(node->left,depth,res);

        res=max(res,depth);

        
        dfs(node->right,depth,res);
        depth--;
    }


    int maxDepth(TreeNode* root) 
    {
        int depth=0;
        int res=0; 

        dfs(root,depth,res);

        return res;   
    }
};

// BFS

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
    int maxDepth(TreeNode* root) {

        if(!root)
            return 0;

        queue<TreeNode*> q;

        int res=0;
        q.push(root);

        while(!q.empty())
        {
            ++res;
            
            int s = q.size();

            for(int i=0;i<s;i++)
            {
                TreeNode* node = q.front();
                q.pop();

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }
        }

        return res;
        
    }
};