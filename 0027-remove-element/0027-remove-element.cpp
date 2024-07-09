class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i=0; i < nums.size();) {
            if(nums[i] != val){
                k++;
                i++;
            }
            else
                nums.erase(nums.begin()+i);    
        }

        return k;
    }
};