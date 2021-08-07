
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> intersection;
        unordered_map<int, int> num_map;
        for(const auto num: nums1)
        {
            num_map[num]++;
        }
        for(const auto num: nums2)
        {
            if(num_map[num] > 0)
            {
                intersection.push_back(num);
                num_map[num]--;
            }
            
        }
        return intersection;
    
    }
};
