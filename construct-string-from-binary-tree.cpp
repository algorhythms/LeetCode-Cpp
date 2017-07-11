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
  string dfs(TreeNode* u) {
    string s = to_string(u->val);
    if (u->left) s += "(" + dfs(u->left) + ")";
    else if (u->right) s += "()";
    if (u->right) s += "(" + dfs(u->right) + ")";
    return s;
  }
  string tree2str(TreeNode* t) {
    if (!t) return "";
    return dfs(t);
  }
};