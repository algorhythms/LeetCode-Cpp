/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *root = new ListNode(0), *p = l1, *q = l2, *cur = root;
    int v = 0;
    int x = 0, y = 0, s;
    while (p || q) {
      x = 0; y = 0;
      if (p) x = p->val;
      if (q) y = q->val;
      s = x + y + v;
      if (s >= 10) {
        cur->next = new ListNode(s - 10);
        v = 1;
      } else {
        cur->next = new ListNode(s);
        v = 0;
      }
      // 32ms
      // 
      // v = s / 10; cur->next = new ListNode(s % 10);
      // 56ms
      
      cur = cur->next;
      if (p) p = p->next;
      if (q) q = q->next;
    }
    if (v) cur->next = new ListNode(v);
    return root->next;
  }
};


class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    vector<int> l, r;
    while (l1) {
      l.push_back(l1->val);
      l1 = l1->next;
    }
    while (l2) {
      r.push_back(l2->val);
      l2 = l2->next;
    }
    if (l.size() < r.size()) std::swap(l, r);
    for (int i = 0; i < r.size(); i++) {
      l[i] += r[i];
      if (l[i] >= 10) {
        if (i + 1 == l.size()) l.push_back(1);
        else ++l[i + 1];
        l[i] -= 10;
      }
    }
    for (int i = r.size(); i < l.size(); i++) {
      if (l[i] >= 10) {
        if (i + 1 == l.size()) {
          l.push_back(1);
          l[i] -= 10;
          break;
        } else {
          ++l[i + 1];
          l[i] -= 10;
        }
      } else break;
    }
    ListNode *root = NULL, *cur = NULL, *tee = NULL;
    for (int i = 0; i < l.size(); i++) {
      if (root) {
        tee = new ListNode(l[i]);
        cur->next = tee;
        cur = tee;
      } else {
        root = new ListNode(l[i]);
        cur = root;
      }
    }
    return root;
  }
};