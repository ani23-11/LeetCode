#define lo long long int
class Solution {
public:
    vector<int> getRow(int p) 
    {
        vector<int>ans(p+1);
        ans[0]=ans[p]=1;
      
        for(int q=1;q<=p/2;q++)
            ans[q]=ans[p-q]= (lo)(ans[q-1])*(lo)(p-q+1)/q;
  
     return ans;
    }
};