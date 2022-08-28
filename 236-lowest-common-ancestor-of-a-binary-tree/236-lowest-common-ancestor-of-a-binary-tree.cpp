/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL||root==p||root==q)
        {
            return root;//best case 
        }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
         TreeNode* right=lowestCommonAncestor(root->right,p,q);
        if(left==NULL)
        {
            return right;//if left is null return whtever is right 
        }
        else if(right==NULL)
        {
            return left;//if right is null return whatever is left
        }
        else
            return root;//if both are not null return the root becoz thats our result
        
    }
};