class Solution {
public:
    int res=0;
    void bst(TreeNode* root,int low,int high){
         if(!root) return ;
       if(root->val<low)  bst(root->right,low,high);
        if(root->val>high)  bst(root->left,low,high);
       if(root->val>=low && root->val<=high){
           res+=root->val;
            bst(root->left,low,root->val);      
             bst(root->right,root->val,high);      
 }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
     bst(root,low,high);
     return res;
    }
};