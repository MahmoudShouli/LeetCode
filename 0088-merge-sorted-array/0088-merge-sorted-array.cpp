class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++,i++)
            nums1[i] = nums2[j];
            
        sort(nums1.begin(),nums1.end());
    }
};