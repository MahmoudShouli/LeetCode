class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = needle.size();
        int m = haystack.size();
        
        int index = 0, count = 0, tracker = 1;
        
        // i is the needle pointer, j is the haystack pointer
        for(int i = 0, j = 0 ; j < m ;){
            // if a match is found, walk through the needle and find it all matches 
            if(haystack[j] == needle[i]){
                 index = j;
                 count = 0;
                 while(haystack[j] == needle[i] && i < n){
                     count++;
                     i++;
                     j++;
                 }
                
                 // this means that we found it
                 if(count == n)
                     return index;
                
                 // doesn't match, retry
                 else {
                     i = 0;
                     j = tracker;
                     tracker++;
                     continue;
                 }
                 
                
            }
            
            else {
                j++;
            }
            
            
        }
        
        
        return -1;
        
    }
};