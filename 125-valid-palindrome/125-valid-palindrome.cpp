class Solution {
public:
    
    char tol(char ch)
    {
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        return ch;
    
    return(ch - 'A' + 'a');
    }

    bool isPalindrome(string s) 
    {
    int n=s.length();
    if(s.length()==0)
        return true;
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&& s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            v.push_back(s[i]);
    }
    int st=0;
    int e=v.size()-1;
    
    while(st<e)
    {
        if(tol(v[st])!=tol(v[e]))
            return false;
        else
        {
            st++;
            e--;
        }           
    }
    return true;
    }
};