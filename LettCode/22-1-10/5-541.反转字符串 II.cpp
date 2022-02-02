///*
//给定一个字符串 s 和一个整数 k，从字符串开头算起，每计数至 2k 个字符，就反转这 2k 字符中的前 k 个字符。
//
//如果剩余字符少于 k 个，则将剩余字符全部反转。
//如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
// 
//
//示例 1：
//
//输入：s = "abcdefg", k = 2
//输出："bacdfeg"
//示例 2：
//
//输入：s = "abcd", k = 2
//输出："bacd"
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/reverse-string-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
///*
//reverse(start, end);
//其中区间是左闭右开的
//[start, end)
//*/
//
//class Solution {
//public:
//    string reverseStr(string s, int k) {
//        int len = s.length();
//
//        for (int i = 0; i < len; i += 2 * k) {
//
//            if (i + k <= len) {
//                reverse(s.begin() + i, s.begin() + i + k);
//                continue;
//            }
//            reverse(s.begin() + i, s.begin() + len);
//        }
//        return s;
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
//    int k = 2;
//    Solution s;
//    string out = "";
//    string data = "abcdefg";
//
//    out = s.reverseStr(data,k);
//    cout<<out<<endl;
//
//    return 0;
//}
//
