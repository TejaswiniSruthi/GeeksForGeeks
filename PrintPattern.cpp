vector<int> pattern(int N){
        // code here
        int t=N;
        bool b=true;
        vector<int>v;
        while(true){
            if(N>=0 && b){
                v.push_back(N);
                N-=5;
                if(N<=0){
                    b=false;
                }
            }
            else if(!b){
                v.push_back(N);
                N+=5;
                if(N==t){
                    v.push_back(t);
                    return v;
                }
            }
        }
    }
