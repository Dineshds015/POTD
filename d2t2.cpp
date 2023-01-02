class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
	            continue;
	        else
	            cout<<S[i];
	    }
	}
};
