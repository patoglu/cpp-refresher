
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*Basic implementation
        if(k == 0) return ;
        k = k % nums.size();
        for(int i = 0 ; i < k ; ++i)
        {
            int last_elem = nums.back();
            nums.insert(nums.begin(), last_elem);
            nums.pop_back();
        }
        */
        /*Using STL, beats 99% of other solutions.*/
        if(k == 0) return ;
        k = k % nums.size();
        vector<int>left(nums.begin(),  nums.end() - k);
        vector<int>right(nums.end() - k, nums.end());
      
        right.insert(
        right.end(),
        std::make_move_iterator(left.begin()),
        std::make_move_iterator(left.end())
        );
       
        nums = right;
        
    }
};
