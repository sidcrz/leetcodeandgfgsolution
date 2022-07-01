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
    bool isValidBST(TreeNode* root) {
       return letmetry(root,LONG_MAX,LONG_MIN);
        
        
    }
    public:
    bool letmetry(TreeNode* root,long maxvalue,long minvalue ){

        if(root==NULL)
        {
            return true;
        }
        if(root->val>=maxvalue||root->val<=minvalue)
        {
            return false;
        } 
        return letmetry(root->left,root->val,minvalue)&&letmetry(root->right,maxvalue,root->val);
    }
};