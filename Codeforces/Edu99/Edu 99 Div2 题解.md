# Edu 99 Div2 题解

## A

## B

**题意**：从0开始，一次只有两种方法移动，第一种是-1，第二种是+k(k为当前的操作次数)，问最少几次能到x

**思路**：先考虑+k，再考虑往回。先算出a[i] = a[i-1] + k,这个a[]数组，找到第一个大于等于x的i，如果a[i]-x == 1则答案为i+1,否则为i。

- 先按照1+2+3+…k的跳法往前调，**如果把其中的某一跳(第k跳)改成y-1,那么最后达到的位置，相当于左移k+1**，可以自己模拟下。
- 那么可以得知我们最小的左移量是2（k=1时)
- 找到大于等于x的第一个sum[i]，如果sum[i]==x，则答案是i
- 如果sum[i]-x>=2,那么我们可以通过改变前面的某一跳，改成y-1，最终到达x处，答案是i
- 如果sum[i]-x<2,那么我们再往前跳一部，则现在通过改变前面的某一跳，改成y-1，最终可以到达x处，答案是i+1
  **此时求得的sum[i]-x，肯定不会超过i**

## C

**题意**：AB打乒乓球，AB都有自己的耐力值，有耐力值可以选择不接球，A先发球，两人都想让自己的胜的次数多，问怎么弄。

**思路**：其实就是先A发球，为了让自己的赢的更多，B一直不接球，等A把球都发完了没有耐力时B再接球发球。

## [D](https://codeforces.com/contest/1455/problem/D)

模拟，选出每一个当作最后剩下的元素，将新数组和原数组对照看能否实现。



