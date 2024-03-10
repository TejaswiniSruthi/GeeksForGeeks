//{ Driver Code Starts
//Initial Template for Java



import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            String str = br.readLine().trim();

            String ans = new Solution().removeDuplicates(str);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java


class Solution {
    String removeDuplicates(String str) {
        int[] cap=new int[26];
        int[] smol=new int[26];
        String res="";
        for(int i=0;i<cap.length;i++){
            cap[i]=0;
            smol[i]=0;
        }
        for(int i=0;i<str.length();i++){
            if(Character.isUpperCase(str.charAt(i))){
                if(cap[str.charAt(i) -'A']!=1){
                    cap[str.charAt(i) -'A']=1;
                    res+=str.charAt(i);
                }
            }
            else{
                if(smol[str.charAt(i) -'a']!=1){
                    smol[str.charAt(i) -'a']=1;
                    res+=str.charAt(i);
                }
            }
        }
        return res;
    }
}

