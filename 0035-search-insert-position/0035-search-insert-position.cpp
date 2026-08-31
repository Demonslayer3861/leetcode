class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0;
    int end=nums.size()-1;
    while(st<end)
    {
        int mid=st+(end-st)/2;
        if (nums[mid]>=target)
        {
            end=mid-1;
        }else{
            st=mid+1;
        }
        
    }
    if (nums[st]==target)
    {
        return st;
    }else if (nums[st]>=target)
    {
        return st;
    }else{
        return st+1;
    }
    
    
    }
};