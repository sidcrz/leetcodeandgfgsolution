/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int diameterOfBinaryTree(TreeNode *root)
        {
            int dim = 0;
            dia(root, dim);
            return dim;

        }
    private:
        int dia(TreeNode *node, int &dim)
        {
            if (node == NULL)
            {
                return 0;
            }
            int lh = dia(node->left, dim);
            int rh = dia(node->right, dim);
            dim = max(dim, lh + rh);
            return 1 + max(lh, rh);
        }

};