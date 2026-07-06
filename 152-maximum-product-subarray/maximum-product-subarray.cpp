class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProductValue = nums[0];

        for (int left = 0; left < n; left++){
            int currProduct = 1;
            for(int right = left ; right < n; right++){
                currProduct *= nums[right];

                if(currProduct > maxProductValue){
                    maxProductValue = currProduct;
                }
            }

        }
        return maxProductValue;
    }
    
};