class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int cursor = digits.size() - 1;
        int same = 0;
        //0 -> 1
        //1 -> 2
        //2 -> 3
        //9 -> 10
        //19 -> 20
        //99 -> 100
        //189 -> 190
        //199 -> 200
        //999 -> 1000
        //2999 -> 3000
        for(int i = digits.size() - 1 ; i >= 0 ; --i)
        {
            if(digits[i] == 9)
            {
                same++;
                digits[i] = 0;
            }
            else if(digits[i] < 9)
            {
                digits[i]++;
                break;
            }
        }
        if(same == digits.size())
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
        
        
    }
};
