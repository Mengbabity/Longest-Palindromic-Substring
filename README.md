# Longest-Palindromic-Substring

问题：给定一个字符串，返回该字符串的最长回文子字符串。

思路：开始的想法是利用一个for循环和两个指针，分别从头和尾来比较是否相等，相等的逐个放入一个string中，若判断不相等清空字符串。然后将所有的回文子字符串
     放入一个vector中，通过比较找到最长的。
     可以得知，这个方法需要每次存储可能的字符，包括错误的字符，是不必要的。
     介绍discuss中的方法。
     用到string的substr方法。所以只需要记录回文子字符串的开始index和长度即可。
    不同于头和尾的比较，是从回文子字符串的中间开始比较，分别走向头（j--）和尾(k++)，则字符串长度是k-j+1，开始的index为j。
    j其实是用来代替i的。
