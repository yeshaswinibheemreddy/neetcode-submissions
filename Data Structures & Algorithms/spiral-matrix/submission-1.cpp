class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size(), col =matrix[0].size();
        vector<int> spiral;
        int r=0,c=0,rl=0,ll=0,ul=0,bl=0,i=0;
        while(i<row*col)
        {
            while(c<(col-rl)) // right
            {spiral.push_back(matrix[r][c]);
            i++;c++;} ul++;r++;c--;
            while(r<(row-bl)) //down
            {spiral.push_back(matrix[r][c]);
            i++;r++;} rl++;r--;c--;
            if(i>=row*col)break;
            while(c>=ll && r>=ul) // left
            {spiral.push_back(matrix[r][c]);
            i++;c--;} bl++;r--;c++;
            while(r>=ul && c>=ll) //up
            {spiral.push_back(matrix[r][c]);
            i++;r--;} ll++;r++;c++;
        }
        return spiral;

        
    }
};
