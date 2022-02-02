///*
//给定一个非空的字符串，判断它是否可以由它的一个子串重复多次构成。给定的字符串只含有小写英文字母，并且长度不超过10000。
//
//示例 1:
//
//输入: "abab"
//
//输出: True
//
//解释: 可由子字符串 "ab" 重复两次构成。
//示例 2:
//
//输入: "aba"
//
//输出: False
//示例 3:
//
//输入: "abcabcabcabc"
//
//输出: True
//
//解释: 可由子字符串 "abc" 重复四次构成。 (或者子字符串 "abcabc" 重复两次构成。)
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/repeated-substring-pattern
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    void getNext(int *next, string s)
//    {
//        int j = 0;
//        next[0] = 0;
//
//        for (int i = 1; i < s.size(); i++) {
//            while (j > 0 && s[j] != s[i]) {
//                j = next[j - 1];
//            }
//            if (s[j] == s[i]) {
//                j++;
//            }
//
//            next[i] = j;
//        }
//    }
//    bool repeatedSubstringPattern(string s) {
//
//        if (s.size() == 0) {
//            return false;
//        }
//        int next[s.size()];
//        int len = s.size();
//        getNext(next, s);
//
//        if (next[len - 1] != 0 && len % (len - (next[len - 1])) == 0) {
//            return true;
//        }
//
//        return false;
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
//            cout << *it1 <<" ";
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
//    string data = "abcabcabc";
//
//    ret = s.repeatedSubstringPattern(data);
//    cout << ret <<endl;
//
//    return 0;
//}
//
