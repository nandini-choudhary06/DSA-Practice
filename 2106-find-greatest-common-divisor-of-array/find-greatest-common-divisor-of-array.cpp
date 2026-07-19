class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNum = nums[0];
        int maxNum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < minNum) {
                minNum = nums[i];
            }
            if(nums[i] > maxNum) {
                maxNum = nums[i];
            }
        }
        while(maxNum != 0) {
            int remainder = minNum % maxNum;
            minNum = maxNum;
            maxNum = remainder; 
        }
        return minNum;
    }
};