
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int place = 0;
        int len = nums.size();
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(nums[i] != 0)
            {
                nums.insert(nums.begin() + place++, nums[i]);
                nums.erase(nums.begin() + i + 1);
            }
        }
        /*for(const auto elem: nums)
        {
            cout << elem << " - ";
        }*/
    }
};
