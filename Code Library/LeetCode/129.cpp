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
    int hero(TreeNode *root,int num){
        if(root==NULL)return 0;
        num= num*10+root->val;
        if(root->left==NULL && root->right==NULL) return num;
        
        return hero(root->left,num)+hero(root->right,num);
    }
    
public:
    int sumNumbers(TreeNode* root) {
        return hero(root,0);
    }
};