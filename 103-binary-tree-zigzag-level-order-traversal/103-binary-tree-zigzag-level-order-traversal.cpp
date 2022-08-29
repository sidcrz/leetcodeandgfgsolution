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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
      vector<vector<int>>result;
        if(root==NULL)
            return result;
        queue<TreeNode*>q;
        q.push(root);
        int lr=true;//l to r
        while(!q.empty())
        {
            int size=q.size();
            vector<int>row(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(lr==true)
                {
                    row[i]=node->val;
                }
                else
                {
                    row[size-1-i]=node->val;
                }
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            } 
            lr=!lr;
            result.push_back(row);
        }
        return result;
        
       
        
        
     }
};