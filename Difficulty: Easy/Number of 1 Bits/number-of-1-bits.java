// User function Template for Java
class Solution {
    static int setBits(int n) {
        // code here
        int cnt = 0;
        while(n!=0){
            if((n&1) == 1){
                cnt++;
            }
            n = n>>1;
        }
        return cnt;
    }
}