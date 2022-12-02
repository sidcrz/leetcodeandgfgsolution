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
    int diameterOfBinaryTree(TreeNode* root) {
        int dl=0;
        binary(root,dl);
        return dl;
        
        
    }
    private:
    int binary(TreeNode* root,int &dl)
    {
        if(root==NULL)return 0;
        int left=binary(root->left,dl);
        int right=binary(root->right,dl);
        dl=max(dl,left+right);
        return 1+ max(left,right);
    }
};