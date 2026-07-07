class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> track;
        for(int i=0;i<nums.size();i++)
        {
            if(track.count(nums[i]))
            {return true;}
            track.insert(nums[i]);
        }
        return false;
        
    }
};