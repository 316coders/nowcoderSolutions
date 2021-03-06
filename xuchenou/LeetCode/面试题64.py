"""
面试题64. 求1+2+…+n
求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
(1+n) * n / 2

输入: n = 3
输出: 6
输入: n = 9
输出: 45

1 <= n <= 10000
"""

class Solution:
    def sumNums(self, n: int) -> int:
        return sum(range(1+n))
