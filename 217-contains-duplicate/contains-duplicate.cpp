class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> withoutDuplicates;
        
        for(int i =0; i< nums.size(); i++){
            withoutDuplicates.insert(nums[i]);
        }
        if(nums.size()== withoutDuplicates.size()) {
            return false;
        } else {
            return true;
        }
    }
};