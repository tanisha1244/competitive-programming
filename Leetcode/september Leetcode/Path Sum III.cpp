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
 void innerdfs(TreeNode* root,int sum,int &count,int targetSum)
  {
      if(root==NULL)
          return;
      
      sum+=root->val;
      
      if(sum==targetSum)
          count++;
      
      innerdfs(root->left,sum,count,targetSum);
      
      innerdfs(root->right,sum,count,targetSum);
  }

void outerdfs(TreeNode* root,int &count,int targetSum)
  {
       if(root==NULL)
           return;
       int sum=0;
      innerdfs(root,sum,count,targetSum);
       
       outerdfs(root->left,count,targetSum);
      outerdfs(root->right,count,targetSum);
  }
    
 
    
    
    int pathSum(TreeNode* root, int targetSum) 
    {
       
        int count=0;
    
        
        outerdfs(root,count,targetSum);
        return count;
    }
};