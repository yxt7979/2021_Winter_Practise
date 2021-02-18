# CF - 702Div3

## B

卡了好久还WA了两次呜呜，卡了我一个小时

啊B场上AC了最后还是出了问题，M没**初始化**呜呜呜。

！不初始化见祖宗！

！不开longlong见祖宗！

比赛的时候做到E，其他都没卡

## F

不难，当时没时间做了呜呜

学到了：要统计每个数出现的次数并将次数合并：

```c++
        int n;
		map<int,int> M;
		scanf("%d",&n);
		int num[n];
		for(int i = 0;i < n;i++){
			scanf("%d",&num[i]);
			M[num[i]] ++ ;
		}
		vector<int> ans;
		for(int i = 0;i < n;i++){
			if(M[num[i]]){
				ans.push_back(M[num[i]]);
				M[num[i]] = 0;
			}
		}
		sort(ans.begin(),ans.end());
```

这样ans数组中就只记录次数了，而且还排好了序。

## G



## 总结

想了下B题浪费的时间太长了，说到底是%运算不太会以至于要分了好多情况。

注意一定要初始化呜呜，这个Devcpp的坑。

还有就是思维不够。如果思维很快的话应该EF可以飞快的过掉的但是15分钟F莫得出来。