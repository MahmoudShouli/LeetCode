

class Solution {
public:
        bool isHappy(int n) {
            
            unordered_set<int> set;
            string str = to_string(n);
            while(1){
                int sum = 0;
                for(auto ch : str) {
                    int digit = ch - '0';
                    sum += (digit * digit);

                }
                
                if(sum == 1)
                    return true;
                else if(set.find(sum) != set.end())
                    return false;
                else
                    set.insert(sum);
                    str = to_string(sum);
            }
       
    
    }
};