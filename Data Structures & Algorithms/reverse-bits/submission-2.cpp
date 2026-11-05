class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        //string bin;
        for(int i=31;i>=0;i--)
        {
            rev=rev<<1;
            rev=rev+(n&1);
            //bin=bin + ((n&1) ?"1" :"0");
            
            if(n!=0) n=n>>1;
            
        }
        //cout<<bin;
        return rev;
    }
};
