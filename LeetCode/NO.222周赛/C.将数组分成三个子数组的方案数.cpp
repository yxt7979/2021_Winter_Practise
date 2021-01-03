class Solution {
public:
    int waysToSplit(vector<int>& nums){
        int n = nums.size();
        int ans = 0;
        int mod = 1e9 + 7;
        vector<int> pre(nums.size()+1);
        for(int i = 1;i <= n;i++) pre[i] = pre[i-1] + nums[i-1];
        for(int i = 3,l = 2,r = 2;i <= n;i++){
        	while(pre[n] - pre[i-1] < pre[i-1] - pre[l-1]) l ++ ;
        	while(r+1 < i && pre[i-1] - pre[r] >= pre[r]) r ++ ;
        	if(l <= r && pre[n] - pre[i-1] >= pre[i-1] - pre[l-1] && pre[i-1] - pre[r-1] >= pre[r-1]) ans = (ans + r - l + 1) % mod;
		} 
		return ans;
    }
};
