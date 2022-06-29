/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        TreeNode* build(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, unordered_map< int, int> &mp)
        {
            if (preStart > preEnd || inStart > inEnd)
                return NULL;
            TreeNode *root = new TreeNode(preorder[preStart]);

            int inRoot = mp[root->val];
            int numLeft = inRoot - inStart;

            root->left = build(preorder, preStart + 1, preStart + numLeft, inorder, inStart, inRoot - 1, mp);
            root->right = build(preorder, preStart + numLeft + 1, preEnd, inorder, inRoot + 1, inEnd, mp);

            return root;
        }
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder)
    {
       	// at first, we make a map for inorder for the index, to check the position of left subtree and right subtree
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;
        TreeNode *root = build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
        return root;
    }
};