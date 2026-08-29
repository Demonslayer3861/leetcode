class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int i = 0;
        int lm = 0;
        int rm = 0;
        int j = height.size() - 1;
        while (i < j) {

            if (height[i] < height[j]) {
                lm = max(lm, height[i]);
                water += lm - height[i];
                i++;
            }
            else {
                rm = max(rm, height[j]);
                water += rm - height[j];
                j--;
            }
        }
        return water;
    }
};