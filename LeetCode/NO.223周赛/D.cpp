class Solution {
public:
	int ans = 1e9;
	vector<int> jobs;
	vector<int> s;
	
	void dfs(int a,int b,int c){
		if(c > ans) return;
		if(a == jobs.size()){
			ans = c;
			return;
		}
		for(int i = 0;i < b;i++){
			s[i] += jobs[a];
			dfs(a+1,b,max(s[i],c));
			s[i] -= jobs[a];
		}
		if(b < s.size()){
			s[b] = jobs[a];
			dfs(a+1,b+1,max(c,s[b]));
			s[b] = 0;
		}
	}
	
    int minimumTimeRequired(vector<int>& _jobs, int k) {
    	jobs = _jobs;
    	s.resize(k);
    	dfs(0,0,0);
    	return ans;
    }
};
