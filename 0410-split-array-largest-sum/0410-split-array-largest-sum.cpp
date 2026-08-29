class Solution {
public:

    bool isvalid(vector<int>& nums,int n, int k,int mid){
        int std=1,pages=0;
        for(int i=0; i<n ; i++){
            if(nums[i]>mid){
                return false;
            }

            if(pages+nums[i]<=mid){
                pages+=nums[i]; 
            }else{
                std++;
                pages=nums[i];
            }
        }
        return std>k ? false : true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int st=0 , end=sum;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isvalid(nums,n,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};