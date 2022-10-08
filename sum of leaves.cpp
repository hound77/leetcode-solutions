class Solution {
private:
    int ans=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left!=NULL){
            if(root->left->left==NULL && root->left->right==NULL)
                ans+=root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return ans;
    }
};
