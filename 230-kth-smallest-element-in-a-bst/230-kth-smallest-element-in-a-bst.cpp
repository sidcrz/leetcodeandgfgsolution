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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>q;
        val(root,k,q);
        return q[k-1];
        
        
    }
    vector<int> val(TreeNode* root, int k,vector<int>&q)
    {
       
        if(root==NULL)
            return q;
        val(root->left,k,q);
        q.push_back(root->val);
        val(root->right,k,q);
        return q;
        
    }
};