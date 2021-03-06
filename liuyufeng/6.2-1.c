// 求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
// 示例 1：

// 输入: n = 3
// 输出: 6
// 示例 2：

// 输入: n = 9
// 输出: 45
//  

// 限制：

// 1 <= n <= 10000

// 解题思路
// 其实就是一道靠基础的题，如果知道一些数电的知识就很容易看出来这些要求就跟没说一样。
// 本来在计算机中就没有乘除法。是使用与非运算和位移运算拼出起来的。
// 当然可以用与非自己写一个乘法出来。但是对于循环的代替，递归是更好的选择。
// 那么怎么判定递归的结束呢？
// 除了使用与非运算得到乘法外这个是另一个需要学习的地方。


int sumNums(int n){
    n && (n += sumNums(n - 1));     //可以查询 &和&&的区别
                                    //&&如果第一个就为假就不会在看之后的条件。同理||中第一个为真也不会在执行后面的条件。
    return n;                       //根据这个实现了判断的效果，这样，当n为0的时候就会停止调用函数。同理也可以借此过滤，自增自减运算符。
                                    //上一个句中说的n是递归内层的形参的n。最外层的n是一个 n（初始状态）+（循环体）的形式。所以不会影响返回的值
}
