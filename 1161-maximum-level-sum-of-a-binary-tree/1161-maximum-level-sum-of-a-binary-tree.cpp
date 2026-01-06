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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> qt;
        qt.push(root);
        int level=1;
        int maxi=INT_MIN;
        int idx=0;
        while(qt.size()){
            int size=qt.size();
            int sum=0;
            while(size--){
                TreeNode* temp=qt.front();
                qt.pop();
                sum+=temp->val;
                if(temp->left) qt.push(temp->left);
                if(temp->right) qt.push(temp->right);
            }
            if(maxi<sum){
                maxi=sum;
                idx=level;
            }
            level++;
        }
        return idx;
    }
};