///*
//实现 strStr() 函数。
//
//给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中
//找出 needle 字符串出现的第一个位置（下标从 0 开始）。如果不存在，则返回  -1 。
//
//说明：
//当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
//
//对于本题而言，当 needle 是空字符串时我们应当返回 0 。
//这与 C 语言的 strstr() 以及 Java 的 indexOf() 定义相符。
//
//示例 1：
//输入：haystack = "hello", needle = "ll"
//输出：2
//
//示例 2：
//输入：haystack = "aaaaa", needle = "bba"
//输出：-1
//
//示例 3：
//输入：haystack = "", needle = ""
//输出：0
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/implement-strstr
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution
//{
//public:
//    void getNext(int *next, string s)
//    {
//        int j = 0;
//        next[0] = 0;
//
//        for (int i = 1; i < s.size(); i++)
//        {
//            while (j > 0 && s[j] != s[i])
//            {
//                j = next[j - 1];
//            }
//
//            if (s[i] == s[j])
//            {
//                j++;
//            }
//            next[i] = j;
//        }
//    }
//
//    int strStr(string haystack, string needle)
//    {
//        if (needle.size() == 0)
//        {
//            return 0;
//        }
//        int next[needle.size()];
//        getNext(next, needle);
//
//        int j = 0;
//        for (int i = 0; i < haystack.size(); i++)
//        {
//            while (j > 0 && haystack[i] != needle[j])
//            {
//                j = next[j - 1];
//            }
//            if (haystack[i] == needle[j])
//            {
//                j++;
//            }
//            if (j == needle.size())
//            {
//                return (i - needle.size() + 1);
//            }
//        }
//        return -1;
//    }
//};
//
//template <class T>
//void printVector(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//template <class T>
//void printVectorDouble(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        for (auto it1 = it->begin(); it1 != it->end(); it1++)
//        {
//            cout << *it1 << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//int main()
//{
//    Solution s;
//    int ret = -1;
//    string haystack = "aabaabaaf";
//    string needle = "aabaaf";
//
//    ret = s.strStr(haystack, needle);
//    cout << ret << endl;
//
//    system("pause");
//
//    return 0;
//}
