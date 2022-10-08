class Solution {
private:
    long cnt=0;
public:
    void dfs(TreeNode* root,long maxi){
        if(root==NULL)
            return;
         if( root->val>=maxi){
             cnt++;
             maxi=root->val;
         }
             dfs(root->left, maxi); 
            dfs(root->right, maxi);
    }
    int goodNodes(TreeNode* root) {
        // long ll=LONG_MIN;
        long maxi=root->val;

       dfs(root,maxi);
        return cnt;
    }
};

