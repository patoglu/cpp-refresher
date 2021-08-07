class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //Sort the method then check for sequential elements. Beats 88%.
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1; ++i)
        {
            if(nums[i] == nums[i + 1])
            {
                return true;
            }
            
        }
        return false;
        
        
        
        /*Set method. Beats 19%
        set<int> num_set;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            
            if(num_set.find(nums[i]) != num_set.end())
            {
                return true;
            }
            num_set.insert(nums[i]);
        }
        return false;
        */
        
    }
};
