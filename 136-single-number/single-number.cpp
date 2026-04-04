class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int x : nums) {
            // XOR each element with the running result
            result ^= x;
        }
        return result;
    }
};