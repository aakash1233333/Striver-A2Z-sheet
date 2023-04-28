class Solution {
public:
    void f(int i, int sum, vecgitor<int>& v, vector<int>& v1, vector<vector<int>>& ans){
        if(sum==0){
            ans.push_back(v1);
        }
        for(int j=i; j<v.size(); j++){
            if(j>i && v[j]==v[j-1]){
                continue;
            }
            if(v[j]>sum){break;}
            v1.push_back(v[j]);
            f(j+1, sum-v[j], v, v1, ans);
            v1.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v={1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>>ans;
        vector<int>v1;
        f(0, n, v, v1, ans);
        for(int i=0; i<ans.size(); i++){
            if(ans[i].size()!=k){
                ans.erase(ans.begin()+i);
                if(ans.empty()){break;}
                i--;
            }
        }
        return ans;
    }
};
class Solution {
public:
    void fun(int k,int n,vector<int> &peti,int dig)
    {  
        if(k==0 and n==0)
        {
            peti.push_back(cur);
            return;
        }



      for (int cur_dig=dig;cur_dig<=min(n,9);cur_dig++)
      {
          cur.push_back(cur_dig);
          func(k-1,n-cur_dig,cur_dig+1);
          cur.pop_back();

      }


    }


    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector><int>> peti;
       func(k,n,cur,peti);
       return 0;
    }
};


