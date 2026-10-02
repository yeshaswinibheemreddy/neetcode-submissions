class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int u=m-1,l=0,i;
        while(l<=u)
        {   i=(u+l)/2;
            
            if(target<matrix[i][0])
            {
                u=i-1;
            }
            else if(target==matrix[i][0])
            {
                return true;
            }
            else
            {
                if(target<=matrix[i][n-1])
                {
                    break;
                }
                l=i+1;
                
            }

        }
        
        return binary(matrix[i],target);
    }

    bool binary(vector<int>& nums, int target)
    { int n=nums.size();
        int u=n-1,l=0,i=n/2;
        while(l<=u)
        {
            if(nums[i]==target){return true;}
            else if(nums[i]<target)
            {
                l=i+1;i=(l+u)/2;
            }
            else
            {
                u=i-1;i=(l+u)/2;
            }

        }
        return false;
    }
};
