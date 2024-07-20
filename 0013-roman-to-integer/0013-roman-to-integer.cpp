class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        
        unordered_map<char, int> hashMap;
        
        hashMap['I'] = 1;
        hashMap['V'] = 5;
        hashMap['X'] = 10;
        hashMap['L'] = 50;
        hashMap['C'] = 100;
        hashMap['D'] = 500;
        hashMap['M'] = 1000;
        
        
        
        for(int i = 0; i < s.size(); i++){
            int ans = hashMap[s[i]];
            if(hashMap[s[i]] < hashMap[s[i + 1]])
                ans = - ans;
            
            
            sum += ans;
            
        }
    
        
        
        
        
        
        return sum;
    }
};