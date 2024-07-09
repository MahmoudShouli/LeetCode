class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        
        int sum = accumulate(nums.begin(), nums.end(),0);
        if(sum < target) return 0;
        
        int min_len = nums.size() , curr_sum = 0;
        int start = 0, end = 0;
        

        curr_sum += nums[end];
        while(end < nums.size()) {
            
            
            
            if(curr_sum >= target){
                min_len = min(min_len, (end - start) + 1);
                curr_sum -= nums[start];
                start++;

            }
            
            else{
                end++;
                if(end < nums.size())
                    curr_sum += nums[end];       
            }
                      
            
            
        }
        
        return min_len;
        
    }
};