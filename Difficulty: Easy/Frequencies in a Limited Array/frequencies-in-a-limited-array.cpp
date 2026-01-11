class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> res = {};
        for(int i=0;i<arr.size();i++){
            res.push_back(mp[i+1]);
        }
        return res;
    }
};
