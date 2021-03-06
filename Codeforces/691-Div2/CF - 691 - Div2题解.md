# CF - 691 - Div2题解

## A

## [B - Move and Turn](https://codeforces.com/contest/1459/problem/B)

**题意**：走法是下一次的走法一定要和本次的垂直

**思路**：找规律，当n为偶数，令p=n/2，可以分成走p步竖走p步横，在一个轴中从0开始p步可以到p,p-2,…,0,…,-p.最终有p+1个位置.所以竖和横一起有(p+1)^2个位置。
当n为偶数，可以分为p步竖p+1步横，或p+1步竖p步横。故总位置为(p+1) ×(p+2)×2。

## C - [Row GCD](https://codeforces.ml/contest/1459/problem/C)

首先我们知道gcd(a,b) = gcd(a,b-a) 

推广一下可以得到：gcd(a，b，c，d…) = gcd(a，b-a，c-b，d-c，…)，知道这个后答案就能轻易得出来了。

要求gcd(a[1]+k，a[2]+k，a[3]+k，…，a[n]+k)，通过上面得公式，可以等价于求 **gcd(a[1]+k，a[2]-a[1]，a[3]-a[2]，…，a[n]-a[n-1])**，发现这个gcd**除了第一项，其它项的值与k无关**，所以先求出g = gcd(a[2]-a[1]，a[3]-a[2]，…，a[n]-a[n-1]) 之后，在求gcd(a[1]+k，g)即可。

注意一点，需要先将a数组排序，使得a[i]-a[i-1]一定是非负数，这样就不用考虑负数对gcd的影响了。也可以选择不排序，最后g=abs(g)也是一样可以的。 (前者为O(n*logn)，后者O(n))