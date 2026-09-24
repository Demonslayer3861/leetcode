class Solution {
public:
    
int sumDigit(int value) {
    int total = 0;
    while (value > 0) {
        total += value % 10;
        value /= 10;
    }
    return total;
}

int smallestIndex(vector<int>& nums) {
    for (int i = 0; i < (int)nums.size(); ++i) {
        if (sumDigit(nums[i]) == i) {
            return i;
        }
    }
    return -1;
}
};