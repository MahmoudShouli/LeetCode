class Solution {
public:
    int missingNumber(vector<int>& nums) {
           
        unordered_map<int, bool> hashMap;
        
        for(int i = 0; i < nums.size(); i++) {
            hashMap[nums[i]] = true;
        }
        
        for(int i = 0; i <= nums.size(); i++) {
            if(!hashMap[i])
                return i;
        }
        
        return 0;
    }
};