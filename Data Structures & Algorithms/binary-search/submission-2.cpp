class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int u=n-1,l=0,i=n/2;
        while(l<=u)
        {
            if(nums[i]==target){return i;}
            else if(nums[i]<target)
            {
                l=i+1;i=(l+u)/2;
            }
            else
            {
                u=i-1;i=(l+u)/2;
            }

        }
        return -1;
    }
};
