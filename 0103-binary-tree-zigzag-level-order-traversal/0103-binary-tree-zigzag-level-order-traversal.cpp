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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int lvlcnt = 0;
        while(!q.empty()){
        int n = q.size();
        vector<int> level;
        for(int i = 0;i<n;i++){
            TreeNode* node=q.front();
            level.push_back(node->val);
            q.pop();

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
        }
        if(lvlcnt % 2 == 1){
            reverse(level.begin(),level.end());
            ans.push_back(level);
        }
        else ans.push_back(level);
        lvlcnt++;
        }
        return ans;
    }
};