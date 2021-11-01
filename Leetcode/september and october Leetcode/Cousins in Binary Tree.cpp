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
    bool inorder(TreeNode*root,int x,int y)
    {
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
           bool xFound = false;
            bool yFound = false; 
            int sz=q.size();
            
            for(int i = 0; i < sz; i++) {
                TreeNode* node = q.front();
                q.pop();
                if(node->val == x) xFound = true;
                if(node->val == y) yFound = true;
                if(node->left && node->right) {
                    if(node->left->val == x && node->right->val == y) return false;
                    if(node->left->val == y && node->right->val == x) return false;
                }
                
                if(node->left) {
                    q.push(node->left);
                }
                if(node->right) {
                    q.push(node->right);
                }
            }

            if(xFound && yFound) return true;  
        
           
        }
        return false;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        return  inorder(root,x,y);
        
    }
};