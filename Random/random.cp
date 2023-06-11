
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        // To store the final string
    	string ans = "";
		
        // To count the charracter in order to insert '-' into the string
    	int cnt = 0;
    	
        // iterating loop from last 
    	for(int i=s.size()-1; i>=0; i--){
		
            // if - found then ignore it
    	    if(s[i] == '-')
    	        continue;
				
            // if we get word equal to k then set cnt = 0 & insert '-' in the ans string
    	    if(cnt == k){
    	        cnt = 0;
    	        ans += "-";
    	    }
            
            // converting the lower case word to upper case
    	    ans += toupper(s[i]);
    	    cnt++;
    	}
		
        // reverse the ans & return it.
    	reverse(ans.begin(), ans.end());
    	return ans;
    }
};

