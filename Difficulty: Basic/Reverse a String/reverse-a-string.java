// User function Template for Java

class Solution {
    public static String reverseString(String s) {
        // code here
        StringBuilder str = new StringBuilder();
        int l = s.length();
        for(int i=l-1; i >=0 ; i--){
            str.append(s.charAt(i));
        }
        return str.toString();
    }
}