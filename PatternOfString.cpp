vector<string> pattern(string S)
	{
	    // Your code goes here
	    vector<string>v;
	    for(int i=S.size()-1;i>=0;i--){
	        v.push_back(S.substr(0,i+1));
	    }
	    return v;
	}
