class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            int count=0;
    vector<int> ans;
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i]!=nums[i+1])
        {
            count++;
            ans.push_back((nums[i]));
        }
        
    }
     if (!nums.empty())
    {
        count++;
        ans.push_back(nums.back());
    }

    nums=ans;
    



return count;
    }
};