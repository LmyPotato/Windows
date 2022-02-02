///*
//字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。请定义一个函数实现字符串左旋转操作的功能。比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。
//
// 
//
//示例 1：
//
//输入: s = "abcdefg", k = 2
//输出: "cdefgab"
//示例 2：
//
//输入: s = "lrloseumgh", k = 6
//输出: "umghlrlose"
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//    void myReverse(string &s, int start, int end)
//    {
//        while (start < end)
//        {
//            swap(s[start], s[end]);
//            start++;
//            end--;
//        }
//    }
//    string reverseLeftWords(string s, int n)
//    {
//        // reverse(s.begin(), s.begin() + n);
//        // reverse(s.begin() + n, s.end());
//        // reverse(s.begin(), s.end());
//        myReverse(s, 0, n - 1);
//        myReverse(s, n, s.size() - 1);
//        myReverse(s, 0, s.size() - 1);
//
//        return s;
//    }
//};
//
//// 反转字符串s中左闭又闭的区间[start, end]
//void reverse(string& s, int start, int end) {
//    for (int i = start, j = end; i < j; i++, j--) {
//        swap(s[i], s[j]);
//    }
//}
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
//    int k = 2;
//    string data = "abcdefg";
//
//    data = s.reverseLeftWords(data, k);
//    cout << data << endl;
//
//    system("pause");
//    return 0;
//}
