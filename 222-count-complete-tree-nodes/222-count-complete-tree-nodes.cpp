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
    int countNodes(TreeNode* root) {
        if(root==NULL)
         return 0;
        int lh=lefth(root);
        int rh=righth(root);
        if(lh==rh)
            return (1<<lh)-1;
        else
        {
            return 1+countNodes(root->left)+countNodes(root->right);
        }
        
    }
    int lefth(TreeNode* node)
    {
        int let=0;
        while(node)
        {
            let++;
            node=node->left;
        }
        return let;
    }
    int righth(TreeNode* node)
    {
        int het=0;
        while(node)
        {
            het++;
            node=node->right;
        }
        return het;
    }
};