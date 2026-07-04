class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int right = height.size()-1;

        while(left < right){
            int width = right - left;
            int currentHeight = min(height[left],height[right]);
            int currWater = width * currentHeight;
            maxWater = max(maxWater, currWater);

            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }

        }
        return maxWater;
    }
};