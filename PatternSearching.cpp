int search(string text, string pat)
	{
	    int j=0;
	    int t=text.size();
	    int p=pat.size();
	    while(j!=t){
	        string s1= text.substr(j,p);
	        if(s1==pat){
	            return 1;
	        }
	        j++;
	    }
	    return 0;
	}
