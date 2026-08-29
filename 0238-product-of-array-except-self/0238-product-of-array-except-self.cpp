class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int ans=1;
    int zero=0;
    vector<int> ans2;
    for (int i = 0; i < nums.size(); i++)
    {if(nums[i]==0){
        zero++;
    }else{
        ans*=nums[i];
    }
    }
    for (int j = 0; j < nums.size(); j++)
    {if(zero>1){
        ans2.push_back(0);
    }else if(zero==1){
        if(nums[j]==0){
            ans2.push_back(ans);
        }else{
            ans2.push_back(0);
        }
    }
    else{
            ans2.push_back(ans/nums[j]);
        }
    }
    
    return ans2;
    }
};