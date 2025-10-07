class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> substringlength(256,-1);
        int lengthmax=0,start=0;
        for (int i=0;i<s.length();i++){
            if(substringlength[s[i]]>=start){
                start=substringlength[s[i]]+1;
                substringlength[s[i]]=i;
                lengthmax=max(lengthmax,i-start+1);
            }
            substringlength[s[i]]=i;
                lengthmax=max(lengthmax,i-start+1);
            
        }
        return lengthmax;}
    
};