# AcWing 每日一题题解（基础）

## 2021.01.13 1346.回文平方

判断回文否

```c++
string yuanlai;
string zhuan;
zhuan.assign(yuanlai.rbegin(),yunalai.rend());
if(zhuan == yuanlai) return true;
```

本身上调转：

```c++
string now;
reverse(now.begin(),now.end());
```

转化成B进制。。。。



## 2021.01.14 剪绳子

double的二分：(保留2位时)

```c++
bool check(double a){...}

double l = 0;
double r = 1e9;
while(r - l > 0.001){
    double mid = l + (r - l) / 2;
    if(check(mid) == true) l = mid;
    else r = mid;
}
printf("%.2lf",l);
```

## 2021.01.15 分巧克力

整数二分

## 2021.01.23 货币系统

完全背包问题

## 2021.01.24 阶乘

题目要得到N！的最后一位非零数

做法：分解出多少个2和多少个5，其余的数×的同时%，最后再把2和5×回去（剔除掉10后）

[y总视频](https://www.acwing.com/video/2326/)

## 2021.01.27 482. 合唱队形

错误思路：先找个最高的再分别两头DP

正确思路：不一定需要包含最高的啊，dp[]是从左向右到i时的最长上升子序列的长度，dp2[]是从右向左的最长上升子序列的长度，最后遍历一遍，看dp[i] + dp2[i] - 1最大为多少，及最后留下的人最多多少。





