# 周赛NO.223 题解

## A - [解码异或后的数组](https://leetcode-cn.com/problems/decode-xored-array/)

**题意**：给格雷码，和第一个值，求原码

**思路**：位运算，一步一步比较，要记得右移一位是 `x >>= 1`. [x]

**正确思路**：`a^b=c,则a=b^c` ......

## B - [交换链表中的节点](https://leetcode-cn.com/problems/swapping-nodes-in-a-linked-list/)

链表题，直接更换结点的数就行

## C - [执行交换操作后的最小汉明距离](https://leetcode-cn.com/problems/minimize-hamming-distance-after-swap-operations/)

**题意**：给两个数组，和可交换的位置对，问交换后最少的不相同位置数。

**思路**：可交换位置对中用并查集看连通的位置块，在一个位置块中计算`A - A∩B`。

这里再次巩固一下并查集，以下把连通块都加起来：

```c++
vector<int> p;
int find(int x){
    if(x != p[x]) p[x] = find(p[x]);
    return p[x];
}

for(int i = 0;i < n;i++) p.push_back(i);
for(auto& x : as){
    p[find(x[0])] = find(x[1]);
}
```

## D - [完成所有工作的最短时间](https://leetcode-cn.com/problems/find-minimum-time-to-finish-all-jobs/)

**题意**：给一数组arr和一个份数k，问所有份的最大值最小为几。

**思路**：dfs搜索，对于每一个数一共两种情况：

- 每个份放进去试试
- 新放入一个份中

DFS还是要多写啊

