# HowManyWayToGet100
计算在 123456789 中任意位置插入 +/- 也可以不插入，最终结果是100的方法数

ZJUDancer软件组的面试题，来自梅老板。当时被问到这道题的时候，一心想着如何优化避免遍历，觉得递归算是暴力解法....emmmmm
后来面试完之后问了一下梅老板，其实遍历就可以做。回来之后写了一下代码，优化毛线，递归的方法瞬间就跑出来了嘛...

所以思路大概就是对每一个位置进行递归，有插入+/- 或者什么都不做3种可能性，跑一下，done

所以应该一共是4种
