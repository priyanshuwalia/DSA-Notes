class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        long supposedSum = (n* (n+1))/2;
        long currentSum=0;
        for(int i = 0; i< n; i++) {
            currentSum = nums[i] + currentSum;
        }
        int result = supposedSum -currentSum;
        return result;
    }
};