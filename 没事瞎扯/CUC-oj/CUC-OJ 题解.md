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