class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m==n){
            return -1;
        }
        int x=m^n;
        int i=0;
        while(true){
            if((x>>i)&1){
                return i+1;
            }
            i+=1; 
        }
    }
};
