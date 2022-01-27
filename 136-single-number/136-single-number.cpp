class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int res=0;
        if(nums.size()<=1)
        {
            return nums[0];
        }
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]!=0&&nums[i+1]-nums[i]!=0)
                res=nums[i];
            if((nums[i]-nums[i-1]==0||nums[i+1]-nums[i]==0)&&(i-1==0))
                res=nums[i-1];
        }
        return res;
    
    }
};