class Solution {
public:
    void hello(TreeNode *root,string &s)
    {
        if(root==NULL)
            return ;
        if(root->left==NULL && root->right==NULL)
        {
           s+=(to_string(root->val))+"#";
            return ;
        }
        hello(root->left,s);
        hello(root->right,s);
                

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        
        string s1="";
        string s2="";
        hello(root1,s1);
        hello(root2,s2);
        cout<<s1<<" "<<s2<<endl;
        
        return s1==s2;
        
        
    }
 
};