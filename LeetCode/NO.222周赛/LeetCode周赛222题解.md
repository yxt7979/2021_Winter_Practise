## LeetCode周赛222

### A.**卡车上的最大单元数** 

排序&贪心

注意vector<vector<int>> 的自定义排序写法：(static,const,&都要写全)

```cpp
static bool cmp(const vector<int>& a,const vector<int>& b){
    return a[1] > b[1];
}
sort(arr.begin(),arr.end(),cmp);
```

### B. [大餐计数](https://leetcode-cn.com/problems/count-good-meals/)

题意：给一串数组，找有多少数对使其和为2的幂次方

思路：1e5所以O(n^2)会超时，固定一个（后面的数），枚举2的k次幂（k从0 - 21）与此数得到差，看前面出现了几次。

补充：为了防止TLE，可以先判断`2^k - 当前数`在不在hashmap中.

```cpp
if(hash.count(t)){
	ans =(ans + hash[t]) % mod;
}
```

### C. [将数组分成三个子数组的方案数](https://leetcode-cn.com/problems/ways-to-split-array-into-three-subarrays/)

题意：用两个隔板将一个数组划分成3个区间，使得left <= mid <= right区间。

思路：

1. 为了表示区间中数的和，用前缀和。
2. 固定一个分割的隔板i（后面的），看另一个的范围，ans += (r - l + 1)。
   1. l的范围：需要让l 到 i的和  <=  i 到 n的和的最小边界。（也就是不满足就++，满足了就停止）
   2. r的范围：需要让0到k的和 <=  k到i的和的最大边界。

### D. [得到子序列的最少操作次数](https://leetcode-cn.com/problems/minimum-operations-to-make-a-subsequence/)

题意：给一个Target数组和一个Arr数组，问在Arr中添加多少数才能使Target是Arr的子序列。

思路：其实最后子数组能用上的就是哪些位置逐渐增加的数字，因此求出Target和Arr共同数的位置的最大上升子序列的长度，用Target.len - 长度即可！

- [这里最长上升子序列的做法](https://leetcode-cn.com/problems/longest-increasing-subsequence/solution/yi-bu-yi-bu-tui-dao-chu-guan-fang-zui-you-jie-fa-x/)
- 又用到了unordered_map

