class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int occurences = nums.size() / 2;
        unordered_map<int,int> countMap;
        
        for(int i = 0; i < nums.size(); i++)
            countMap[nums[i]]++;
        
        
        for(auto pair : countMap)
            if(pair.second > occurences)
                return pair.first;
        
        return 0;
    }
};