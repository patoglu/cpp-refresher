class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        /*Clear solution
        sort(nums.begin(),nums.end());
        int ans=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=0;
                nums[i+1]=0;
                i++;
            }
        }
        ans = accumulate(nums.begin(),nums.end(),0);
        return ans;*/
        //XOR solution.
        int result = 0;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            result ^= nums[i];
        }
        return result;
    }
};
