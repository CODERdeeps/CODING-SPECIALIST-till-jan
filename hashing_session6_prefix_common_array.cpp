class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n, 0);
        unordered_map<int, int> ump;
        int cnt = 0;//the counter
        
        if(A[0]==B[0]) {cnt++;
        ans[0] = cnt; }
        
        ump[A[0]]++;
        ump[B[0]]++;
        
        for(int i = 1; i<n;i++)
        {
            if(A[i]==B[i]){
                cnt++;
                
            }
            else
            {
                if(ump.find(A[i])!=ump.end()) cnt++;
                if(ump.find(B[i])!=ump.end()) cnt++;
            }
            
            ans[i] = cnt;
            ump[A[i]]++;
            ump[B[i]]++;
            
        }
        return ans;
        
    }
};
