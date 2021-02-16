# CUC-OJ 题解

## 算法训练 最短路

**题意**：给一个有向图，(边权可能为负，但保证没有负环),求起点到其他点的最短路

**思路**：刚开始想用dijkstra,但是有负边不可的，所以要用Balloon-Ford，第一次写这个吼吼

**模板**：

```c++
//n点,m边,dis[]为到起点s的距离
struct Edge{
    int st,en,len;
}E[MaxE];

//main中
//先都最大化
fill(dis+1,dis+n+1,INF);

dis[s] = 0;
//外层循环为点数-1
for(int i = 1;i < n;i++){
    bool change = false;
    //内层循环为边数
    for(int j = 1;j <= m;j++){
        if(dis[E[j].st] + E[j].len < dis[E[j].en]){
            dis[E[j].en] = dis[E[j].st] + E[j].len;
            change = true;
        }
    }
    if(!change) break;
}
```

## 算法训练 安慰奶牛

**思路**：说了一堆其实是找最小生成树，这里的边权需要改下

Kruskal(克鲁斯卡尔)用到了并查集的知识，也是第一次写，如果知道并查集会比老师讲的Prim好写点。

[推荐视频](https://www.bilibili.com/video/BV1Eb41177d1/?spm_id_from=333.788.videocard.0)

具体思路是：先将边按权值从小到大排序，在判断加入无环后，逐渐加进图中。

模板：(求最小生成树的边权和sum)

```c++
struct Edge{
    int st,en,len;
}E[MaxE];
int fa[MaxN];
int find(int x){
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}
bool join(int a,int b){
    int f = find(a);
    int fb = find(b);
    if(f == fb) return false;
    else {
        fa[f] = fb;
        return true;
    }
}

//main 中
for(int i = 1;i <= n;i++) fa[i] = i;
sort(E + 1,E + m + 1,cmp);
int sum = 0;
int haveE = 0;
for(int i = 1;i <= m;i++){
    if(join(E[i].st,E[i].en)){
        sum += E[i].len;
        haveE ++ ;
        if(haveE == m-1) break;
    }
}
```

![image-20210123214546210](https://littlefisher.oss-cn-beijing.aliyuncs.com/images/image-20210123214546210.png)

## 核桃的数量

**题意**：求最小的数，让%三个数可以 == 0

**题解**：lcm(a,lcm(b,c))

## 带分数

**题解**：全排列找到1-9的不同顺序，同时每个顺序枚举可能的a,b,c，判断是否可以。

## 剪格子

**题意**：给一个整数矩阵，找和第一个（1，1）连通的最小区间，且区间的数的和为所有数和的一半。

**思路**：dfs(int x,int y,int num,int cnt)，不能用bfs虽然是求最小的，因为这个每种情况可以重复走。

## 大臣的旅费

给一个无环的图，找两个点之间的最长距离。

**思路**：先从1点找到离的最远的点，这个一定是最长距离两点中的一个，再从这个点找最长距离。

## 幸运数

刚开始题意理解错了，后来发现是递归啊:D

## 装箱问题

啊好难想，dp[i]是不超过i的最大体积，最后再V - 的dp[V]即可。

```c++
dp[j] = max(dp[j],dp[j - w[i]] + w[i]);
```

## 三元一次方程

因为输出两位小数，这里要用abs(...)，长见识了！

```c++
for(double i = -100;i <= 100;i += 0.01){
    if(abs(a*i*i*i + b*i*i + c*i + d) <= 0.0001){
        printf("%.2lf ",i);
    }
}
```





