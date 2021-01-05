#include <bits/stdc++.h> 
#define FileNum 300 
#define FileStartNum 1
#define N_max 100000
#define N_min 2
#define Num_max 1048576
#define Num_min 0

using namespace std;

typedef long long ll;

//此处填写正确函数 
int countPairs (vector<int> d){
    int ans = 0,mod = 1e9 + 7;
    unordered_map<int,int> hash;
    for(auto x : d){
        for(int i = 0;i < 22;i++){
            int t = (1 << i) - x;
            if(hash.count(t)){
                ans =(ans + hash[t]) % mod;
            }
        }
    	hash[x] ++ ;
    }
    return ans % mod;
}

int main()
{
	for(int i = FileStartNum;i <= FileNum;i++){
		string in;
		string out;
		in.append("D:\/大二寒假\/num\/in\/");
		in += to_string(i);
		in += ".in";
		
		out.append("D:\/大二寒假\/num\/out\/");
		out += to_string(i);
		out += ".out";
		
		std::ofstream fout(in); 
		int n = int((rand() % (N_max-N_min+1))+N_min);
	    fout << n <<endl ;
		vector<int> V;
		for(int j = 0;j < n;j++){
			int num = int((rand() % (Num_max-Num_min+1))+Num_min);
			V.push_back(num);
			fout<<num<<" ";
		}
	    fout.close();
		
		int ans = countPairs(V);
		std::ofstream fout2(out); 
	    fout2 << ans ;
	    fout2.close();
	    
	    // logs
	    cout<<"case "<<i<<endl;
	    cout<<"n = "<<n<<endl;
	    cout<<"nums : ";
	    for(int j = 0;j < V.size();j++) cout<<V[j]<<" ";
	    cout<<"Ans : "<<ans<<endl;
	}
	return 0;
}


