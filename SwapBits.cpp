int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        int a=(1<<n)-1;
        int lsb=a<<p1;
        int msb=a<<p2;
        int x1=x&lsb;
        int x2=x&msb;
        x=x^x1;
        x=x^x2;
        x1=x1<<(p2-p1);
        x2=x2>>(p2-p1);
        
        //cout<<a;
        int res=x1|x2;
        return res|x;
        
        
        
        
    }
