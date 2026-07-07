class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> N;
        for(int i=0;i<nums.size();i++)
        {
            N.push_back({nums[i],i});
        }

        sort(N.begin(), N.end());

        int i=0, j = nums.size()-1;
        while(i<j)
        {
            int sum = N[i].first +N[j].first;
            if(sum ==target)
            {
                return{min(N[i].second, N[j].second), max(N[i].second, N[j].second)};
            }
            else if( sum>target )
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {};
        
    }
};
