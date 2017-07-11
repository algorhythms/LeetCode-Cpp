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
  vector<int> s, t;
  void dfs1(TreeNode* u) {
    s.push_back(u->val);
    if (u->left) dfs1(u->left);
    if (u->right) dfs1(u->right);
  }
  inline int calc(int x) {
    int pos = lower_bound(s.begin(), s.end(), x) - s.begin();
    return t[pos];
  }
  void dfs2(TreeNode* u) {
    u->val = calc(u->val);
    if (u->left) dfs2(u->left);
    if (u->right) dfs2(u->right);
  }
  TreeNode* convertBST(TreeNode* root) {
    if (!root) return root;
    dfs1(root);
    std::sort(s.begin(), s.end());
    int n = s.size();
    for (int i = 0; i < n; ++i) t.push_back(s[i]);
    for (int i = n - 2; i >= 0; --i) t[i] += t[i + 1];
    dfs2(root);
    return root;
  }
};