class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hashMap;
        int n = nums.size();
           
        // Build the hash table
        
        for(int i = 0; i < n ; i++) {        
            hashMap[nums[i]] = i;
        }
        
        
        // Find the complement
        
        for(int i = 0; i < n; i++) {
           int complement = target - nums[i];
           if(hashMap.count(complement) && hashMap[complement] != i) {
               return {i, hashMap[complement]};
           }
    
        }
        
        return {};
        
    }
};