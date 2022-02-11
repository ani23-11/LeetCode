class Solution {
public:
    void dfs(TreeNode* root,vector<int> & postorder)
    {
        if(root == NULL) 
            return ;
        dfs(root->left,postorder);
        dfs(root->right,postorder);
        postorder.push_back(root->val);
    }
    void bfs(TreeNode* root,vector<int> &postorder)
    {
       if(root == NULL) 
           return ;
        stack<TreeNode*> stack1;
        stack<int> stack2;
        stack1.push(root);
        while(!stack1.empty())
        {
            TreeNode* curr = stack1.top();
            stack1.pop();
            stack2.push(curr->val);
            if(curr->left)
                stack1.push(curr->left);
            if(curr->right)
                stack1.push(curr->right);
        }
        while(!stack2.empty())
        {
            postorder.push_back(stack2.top());
            stack2.pop();
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        bfs(root,postorder);
        return postorder;
    }
};