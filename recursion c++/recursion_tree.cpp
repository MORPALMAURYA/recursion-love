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
class Solution
{
public:
    bool checkMirror(TreeNode *root1, TreeNode *root2)
    {
        // base case
        if (root1 == NULL && root2 == NULL)
            return true;
        if (root1 == NULL && root2 != NULL)
            return false;
        if (root1 != NULL && root2 == NULL)
            return false;
        if (root1->val != root2->val)
            return false;

        bool op1 = ch\eckMirror(root1->left, root2->right);
        bool op2 = checkMirror(root1->right, root2->left);
        bool finalAns = op1 && op2;

        return finalAns;
    }
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
            return true;

        return checkMirror(root->left, root->right);
    }
};