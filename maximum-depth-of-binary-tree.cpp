/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *   int val;
 *   TreeNode *left;
 *   TreeNode *right;
 *   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  int ans = 1;
  void dfs(TreeNode* u, int dep) {
    if (dep > ans) ans = dep;
    if (u->left) dfs(u->left, dep + 1);
    if (u->right) dfs(u->right, dep + 1);
  }
  int maxDepth(TreeNode* root) {
    if (!root) return 0;
    dfs(root, 1);
    return ans;
  }
};