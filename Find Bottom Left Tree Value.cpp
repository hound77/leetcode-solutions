class Solution {
private:
    int lvl=0;
public:
    void fun(TreeNode* root, int lvl, int &maxl, int &ans ){
        if(root==NULL)
            return;
        fun(root->left,lvl+1,maxl,ans);
        fun(root->right,lvl+1,maxl,ans);
        if(lvl>maxl){
            maxl=lvl;
            ans=root->val;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int maxl=0;
        int ans=root->val;
        fun(root, lvl, maxl, ans);
        return ans;
    }
};
