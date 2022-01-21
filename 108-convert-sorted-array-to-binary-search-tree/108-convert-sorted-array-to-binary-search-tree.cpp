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
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {return sortedArrayToBSTHelper(nums,0,nums.size()-1);}

private:
    TreeNode *sortedArrayToBSTHelper(vector<int> &nums,int start,int end) 
    {
        if (start <= end)
        {
            TreeNode *node=new TreeNode(nums[start+(end-start)/2]);
            node->left=sortedArrayToBSTHelper(nums,start,start+(end-start)/2-1);
            node->right=sortedArrayToBSTHelper(nums,start+(end-start)/2+1,end);
            return node;
        }
        return nullptr;
    }
};