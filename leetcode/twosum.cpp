
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Cool solution.
        unordered_map <int,int> pairs;
        vector <int> result;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            int diff = target - nums[i];
            if(pairs.find(diff) != pairs.end() && pairs.find(diff)->second != i)
            {
                result.push_back(i);
                result.push_back(pairs.find(diff)->second);
                return result;
            }
            pairs[nums[i]] = i;
        }
        return result;
        
        /* Poor solution.
        vector <int> result;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            for(int j = i + 1 ; j < nums.size() ; ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
                    
            }
        }
        return result;
        */
        
        
        
        
    }
};
