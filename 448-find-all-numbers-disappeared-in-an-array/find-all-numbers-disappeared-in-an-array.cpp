class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> set_nums(nums.begin(), nums.end());
        // nums ={4,3,2,7,8,2,3,1}
        // set_nums = {4,3,2,7,8,1}
        vector<int> result;
        int n = nums.size();
        for(int i =1; i < n+1; i++){
           if(set_nums.find(i) != set_nums.end()){

           } else {
            result.push_back(i);
           };
        }
        return result;
    }
};