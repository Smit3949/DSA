// Leetcode Problem : 46. Permutations(https://leetcode.com/problems/permutations/)

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& a) {
        makePermution(0,a);
        return ans;
    }
    
    void makePermution(int index,vector<int>& a)
    {
        if(index==a.size())
        {
            ans.push_back(a);
        }
        for(int i=index;i<a.size();i++)
        {
            swap(a[i],a[index]);
            makePermution(index+1,a);
            swap(a[i],a[index]);
        }
    }
};
