# AcWing 每日一题题解

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





