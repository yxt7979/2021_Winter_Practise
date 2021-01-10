class Solution {
public:
	vector<int> p;
	int find(int x){
		if(x != p[x]) p[x] = find(p[x]);
		return p[x];
	}
    int minimumHammingDistance(vector<int>& a, vector<int>& b, vector<vector<int>>& as) {
        int n = a.size();
        for(int i = 0;i < n;i++) p.push_back(i);
        for(auto& x : as){
        	p[find(x[0])] = find(x[1]);
		}
		int ans = 0;
		vector<unordered_multiset<int>> hash(n);
		for(int i = 0;i < n;i++){
			hash[find(i)].insert(a[i]);
		}
		for(int i = 0;i < n;i++){
			auto& x = hash[find(i)];
			if(x.count(b[i])) x.erase(x.find(b[i]));
			else ans ++ ;
		}
		return ans;
    }
};
