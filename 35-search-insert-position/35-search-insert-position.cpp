class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int n = nums.size();

        for(int i=0;i<n;++i)
            if(nums[i]==target)
                return i;
             
        int insertion=0;
        
        for(int j=0;j<n;++j)
            if(target > nums[j])
                insertion=j+1;
            
        return insertion;  
    }
};