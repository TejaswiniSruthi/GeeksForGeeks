class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        int s=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
            arr[i] =s;
        }
        return arr;
    }
};