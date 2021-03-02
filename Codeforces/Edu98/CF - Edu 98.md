# CF - Edu 98

## A&C

还行不难

## B

![image-20210302103514632](https://littlefisher.oss-cn-beijing.aliyuncs.com/images/image-20210302103514632.png)

思路：

第一种：

考虑选择第i个盒子，剩下n − 1个盒子中物品最多的盒子为j，分完第i个盒子后每个盒子物品数量为ave，那么必然有ave ≥ a [ j ]。故记录下前缀max和后缀max，然后遍历每个盒子即可。

第二种：满足以下两个式子的最下need

- (sum + need) % (n-1) == 0
- (sum + need) / (n-1) >= max

 ## D

看不进去题，是斐波那契数 / 2^n

看题解写的是 Fib[i] * Inv(pow(2,n))

好神奇诶，除以2的n次方 = 乘以2的n次方的逆元诶！上次庄大仙说一般有%都用逆元？