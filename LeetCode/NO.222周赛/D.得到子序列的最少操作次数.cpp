class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> minnums;
        for(int v : nums)
        {
            if(!minnums.size() || v > minnums.back()) 
                minnums.push_back(v);
            else
                *lower_bound(minnums.begin(), minnums.end(), v) = v;
        }
        return minnums.size();
    }
    int minOperations(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> M;
        for(int i = 0;i < target.size();i++){
            M[target[i]] = i;
        }
        vector<int> T;
        for(int i = 0;i < arr.size();i++){
            if(M.count(arr[i])){
                T.push_back(M[arr[i]]);
            }
        }
        return target.size() - lengthOfLIS(T);
    }
};
