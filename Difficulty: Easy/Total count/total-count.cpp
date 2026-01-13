// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int res = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%k!=0){
                res+=1;
            }
            res+=int(arr[i]/k);
        }
        return res;
    }
};

// 4
// 10 2 3 4 7

// 2 2
// 2 0
// 3 0
// 0 1
// 3 1
// 13