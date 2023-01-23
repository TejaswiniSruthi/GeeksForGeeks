void printPattern(string s)
{
   //Your code here
   int n=s.size();
   int i=n/2;
   string s1="";
   while(true){
       s1+=s[i];
       cout<<s1<<"$ ";
       i++;
       if(i==n){
           i=0;
       }
       if(i==n/2){
           break;
       }
   }
}
